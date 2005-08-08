package nl.cwi.sen1.gui;

import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

import javax.swing.AbstractAction;
import javax.swing.Action;
import javax.swing.BorderFactory;
import javax.swing.ButtonGroup;
import javax.swing.Icon;
import javax.swing.JComponent;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.JRadioButtonMenuItem;
import javax.swing.JToolBar;
import javax.swing.SwingUtilities;
import javax.swing.WindowConstants;
import javax.swing.border.EtchedBorder;

import net.infonode.docking.DockingWindow;
import net.infonode.docking.DockingWindowAdapter;
import net.infonode.docking.OperationAbortedException;
import net.infonode.docking.RootWindow;
import net.infonode.docking.View;
import net.infonode.docking.ViewSerializer;
import net.infonode.docking.properties.RootWindowProperties;
import net.infonode.docking.theme.BlueHighlightDockingTheme;
import net.infonode.docking.theme.ClassicDockingTheme;
import net.infonode.docking.theme.DefaultDockingTheme;
import net.infonode.docking.theme.DockingWindowsTheme;
import net.infonode.docking.theme.GradientDockingTheme;
import net.infonode.docking.theme.ShapedGradientDockingTheme;
import net.infonode.docking.theme.SlimFlatDockingTheme;
import net.infonode.docking.theme.SoftBlueIceDockingTheme;
import net.infonode.docking.util.DockingUtil;
import net.infonode.docking.util.ViewMap;
import net.infonode.util.Direction;
import nl.cwi.sen1.util.StudioMenuBar;
import toolbus.AbstractTool;
import aterm.ATerm;
import aterm.ATermFactory;
import aterm.ATermList;
import aterm.pure.PureFactory;

public class StudioImpl implements Studio, GuiTif {
	private static int nextUniqueComponentID = 0;

	private PureFactory factory;

	private GuiBridge bridge;

	private ViewMap viewsById;

	private Map idsByComponent;

	protected Map componentsByView;

	protected RootWindow rootWindow;

	private RootWindowProperties properties;

	private JFrame frame;

	private ATermList menuList;

	private Map componentMenus;

	private DockingWindowsTheme currentTheme;

	private View activeView;

	private JLabel statusBar;

	private boolean menuBarUpdatePending;

	public static void main(String args[]) throws Exception {
		new StudioImpl(args);
	}

	public StudioImpl(String[] args) {
		initialize();

		rootWindow = createRootWindow();

		startFrameThread();

		startBridgeThread(args);
	}

	private void startBridgeThread(String[] args) {
		bridge = new GuiBridge(factory, this);
		try {
			bridge.init(args);
			bridge.connect();
			bridge.setLockObject(this);
		} catch (IOException e) {
			System.err.println("Could not establish connection to ToolBus: "
					+ e);
			System.exit(1);
		}

		Thread thread = new Thread(new Runnable() {
			public void run() {
				bridge.run();
			}
		});
		thread.setName("BasicStudio");
		thread.start();
	}

	private void startFrameThread() {
		SwingUtilities.invokeLater(new Runnable() {
			public void run() {
				createFrame();
			}
		});
	}

	private void initialize() {
		factory = new PureFactory();
		menuList = factory.getEmpty();
		properties = new RootWindowProperties();
		currentTheme = new ShapedGradientDockingTheme();
		idsByComponent = new HashMap();
		componentsByView = new HashMap();
		componentMenus = new HashMap();
		viewsById = new ViewMap();
	}

	synchronized private static int nextComponentID() {
		return nextUniqueComponentID++;
	}

	protected RootWindow createRootWindow() {
		ViewSerializer viewSerializer = new ViewSerializer() {
			public void writeView(View arg0, ObjectOutputStream arg1) {
			}

			public View readView(ObjectInputStream arg0) {
				return null;
			}
		};

		RootWindow root = new RootWindow(viewSerializer);

		root.setPreferredSize(new Dimension(800, 600));

		// Set gradient theme. The theme properties object is the super object
		// of our properties object, which
		// means our property value settings will override the theme values
		properties.addSuperObject(currentTheme.getRootWindowProperties());

		// Our properties object is the super object of the root window
		// properties object, so all property values of the
		// theme and in our property object will be used by the root window
		root.getRootWindowProperties().addSuperObject(properties);

		root.getWindowBar(Direction.DOWN).setEnabled(true);

		root.addListener(new DockingWindowAdapter() {
			public void viewFocusChanged(View oldView, View newView) {
				if (newView != null) {
					activeView = newView;
					updateMenuBar();
					updateStatusBar();
				}
			}

			public void windowClosing(DockingWindow window)
					throws OperationAbortedException {
				if (window instanceof View) {
					StudioComponent component = (StudioComponent) componentsByView
							.get(window);

					try {
						component.requestClose();
					} catch (CloseAbortedException e) {
						throw new OperationAbortedException(e.getMessage(), e
								.getCause());
					}
				}
			}

			public void windowClosed(DockingWindow window) {
				if (window instanceof View) {
					StudioComponent component = (StudioComponent) componentsByView
							.get(window);

					removeComponent(component);
					component.close();
				}
			}

			public void windowHidden(DockingWindow arg0) {
				updateMenuBar();
				updateStatusBar();
			}
		});

		return root;
	}

	private void updateStatusBar() {
		if (activeView != null) {
			StudioComponent component = getComponent(activeView);
			String message = component.getStatusMessage();
			statusBar.setText(message == null ? " " : message);
		}
	}

	private void updateMenuBar() {
		if (!menuBarUpdatePending) {
			menuBarUpdatePending = true;
			SwingUtilities.invokeLater(new Runnable() {
				public void run() {
					if (frame != null) {
						frame.setJMenuBar(createMenuBar());
					}
					if (rootWindow != null) {
						rootWindow.revalidate();
					}
					menuBarUpdatePending = false;
				}
			});
		}
	}

	public ATermFactory getATermFactory() {
		return factory;
	}

	protected View createView(StudioComponent component, int id) {
		final String name = component.getName();
		Icon icon = component.getIcon();
		JComponent viewComponent = component.getViewComponent();
		View view = new View(name, icon, viewComponent);
		componentsByView.put(view, component);
		viewsById.addView(id, view);

		return view;
	}

	protected int registerComponent(final StudioComponent component) {
		component.addStudioComponentListener(new StudioComponentAdapter() {
			public void statusMessageChanged(StatusMessageEvent event) {
				StudioComponent activeComponent = (StudioComponent) componentsByView
						.get(activeView);
				if (event.getSource() == activeComponent) {
					String message = event.getNewMessage();
					statusBar.setText(message == null ? " " : message);
				}
			}

		});
		int id = nextComponentID();
		idsByComponent.put(component, new Integer(id));
		return id;
	}

	public void addComponent(StudioComponent component) {
		int id = registerComponent(component);
		final View view = createView(component, id);
		SwingUtilities.invokeLater(new Runnable() {
			public void run() {
				showView(view);
			}
		});

	}

	public void removeComponent(StudioComponent component) {
		int id = unregisterComponent(component);
		final View view = deleteView(id);
		SwingUtilities.invokeLater(new Runnable() {
			public void run() {
				view.close();
			}
		});
	}

	private View deleteView(int id) {
		View view = viewsById.getView(id);
		viewsById.removeView(id);
		return view;
	}

	private int unregisterComponent(StudioComponent component) {
		int id = ((Integer) idsByComponent.get(component)).intValue();
		idsByComponent.remove(component);
		return id;
	}

	private void createFrame() {
		// JFrame.setDefaultLookAndFeelDecorated(true);
		frame = new JFrame();
		frame.setSize(800, 600);
		frame.getContentPane().add(createToolBar(), BorderLayout.NORTH);
		frame.getContentPane().add(createStatusBar(), BorderLayout.SOUTH);
		frame.getContentPane().add(rootWindow, BorderLayout.CENTER);
		frame.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent e) {
				bridge.postEvent(factory.make("window-closing-event"));
			}
		});
		frame.setDefaultCloseOperation(WindowConstants.DO_NOTHING_ON_CLOSE);
		frame.setVisible(true);
	}

	private Component createStatusBar() {
		this.statusBar = new JLabel(" ");
		statusBar.setBorder(BorderFactory
				.createEtchedBorder(EtchedBorder.RAISED));
		return statusBar;
	}

	private StudioMenuBar createMenuBar() {
		StudioMenuBar menuBar = new StudioMenuBar();
		menuBar.add(createEmptyFileMenu());
		menuBar.add(createViewsMenu());
		menuBar.add(createThemesMenu());

		ATermList menuPaths = menuList;
		while (!menuPaths.isEmpty()) {
			final ATerm menuPath = menuPaths.getFirst();
			menuBar.addMenuPath(menuPath, new AbstractAction(menuPath
					.toString()) {
				public void actionPerformed(ActionEvent e) {
					ATerm event = factory.make("menu-event(<term>)", menuPath);
					bridge.postEvent(event);
				}
			});
			menuPaths = menuPaths.getNext();
		}

		if (activeView != null) {
			StudioComponent activeComponent = getComponent(activeView);
			List menus = getComponentMenus(activeComponent);
			if (menus != null) {
				Iterator iter = menus.iterator();
				while (iter.hasNext()) {
					Object menu = iter.next();

					if (menu instanceof MenuItem) {
						MenuItem menuItem = (MenuItem) menu;
						menuBar.addMenuPath(menuItem.getMenuPath(), menuItem
								.getAction());
					} else {
						menuBar.add((JMenu) menu);
					}
				}
			}
		}

		return menuBar;
	}

	private JMenu createViewsMenu() {
		JMenu menu = new JMenu("Views");
		int count = viewsById.getViewCount();

		for (--count; count >= 0; count--) {
			final View view = viewsById.getViewAtIndex(count);
			JMenuItem item = new JMenuItem(view.getTitle());
			item.setEnabled(view.getRootWindow() == null);
			item.addActionListener(new AbstractAction() {
				public void actionPerformed(ActionEvent e) {
					showView(view);
					view.restoreFocus();
				}
			});

			menu.add(item);
		}

		return menu;
	}

	private List getComponentMenus(StudioComponent component) {
		if (componentMenus == null) {
			return null;
		}

		return (List) componentMenus.get(component);
	}

	private JMenu createEmptyFileMenu() {
		return new JMenu("File");
	}

	private JToolBar createToolBar() {
		JToolBar toolBar = new JToolBar();
		JLabel label = new JLabel("Sample action");
		toolBar.add(label);
		return toolBar;
	}

	protected void showView(View view) {
		if (rootWindow == null) {
			rootWindow = createRootWindow();
			frame.getContentPane().add(rootWindow, BorderLayout.CENTER);
		}
		DockingUtil.addWindow(view, rootWindow);
		rootWindow.revalidate();
	}

	private JMenu createThemesMenu() {
		JMenu themesMenu = new JMenu("Themes");

		DockingWindowsTheme[] themes = { new DefaultDockingTheme(),
				new BlueHighlightDockingTheme(), new SlimFlatDockingTheme(),
				new GradientDockingTheme(), new ShapedGradientDockingTheme(),
				new SoftBlueIceDockingTheme(), new ClassicDockingTheme() };

		ButtonGroup group = new ButtonGroup();

		for (int i = 0; i < themes.length; i++) {
			final DockingWindowsTheme theme = themes[i];

			JRadioButtonMenuItem item = new JRadioButtonMenuItem(theme
					.getName());
			item.setSelected(i == 4);
			group.add(item);

			themesMenu.add(item).addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					// Clear the modified properties values
					properties.getMap().clear(true);
					setTheme(theme);
				}
			});
		}

		return themesMenu;
	}

	private void setTheme(DockingWindowsTheme theme) {
		properties.replaceSuperObject(currentTheme.getRootWindowProperties(),
				theme.getRootWindowProperties());
		currentTheme = theme;

	}

	public void addMenuEvents(ATerm menus) {
		menuList = menuList.concat((ATermList) menus);
		updateMenuBar();
	}

	public void addComponentMenu(StudioComponent component, JMenu menu) {
		if (componentMenus == null) {
			componentMenus = new HashMap();
		}

		List menus = (List) componentMenus.get(component);
		if (menus == null) {
			menus = new LinkedList();
		}
		menus.add(menu);

		componentMenus.put(component, menus);
		updateMenuBar();
	}

	public void setTitle(String title) {
		frame.setTitle(title);
	}

	public void recAckEvent(ATerm t0) {
	}

	public void recTerminate(ATerm t) {
		bridge.stopRunning();
		frame.dispose();
	}

	public void connect(String toolName, final AbstractTool tool) {
		try {
			tool.connect(toolName, bridge.getAddress(), bridge.getPort());
			tool.setLockObject(this);
		} catch (IOException e) {
			System.err.println("Failed to connect '" + toolName
					+ "' to ToolBus");
			e.printStackTrace();
		}
		Thread thread = new Thread(new Runnable() {
			public void run() {
				tool.run();
			}
		});
		thread.setName(toolName + "-runner");
		thread.start();
	}

	private StudioComponent getComponent(View view) {
		return (StudioComponent) componentsByView.get(view);
	}

	private void startPlugin(PluginLoader loader) {
		final StudioPlugin plugin = loader.instantiatePlugin();
		Thread thread = new Thread(new Runnable() {
			public void run() {
				plugin.initStudioPlugin(StudioImpl.this);
			}
		});
		thread.setName(plugin.getName() + "-starter");
		thread.start();
	}

	public void loadJar(String pluginJar) {
		startPlugin(new PluginLoader(pluginJar));
	}

	public void loadJarUrls(String pluginJar, ATerm classPath) {
		startPlugin(new PluginLoader(pluginJar, (ATermList) classPath));
	}

	public void loadJarClasspath(String pluginJar, String classPath) {
		startPlugin(new PluginLoader(pluginJar, classPath));
	}

	public void addComponentMenu(StudioComponent component, ATerm menuPath,
			Action action) {
		List menus = (List) componentMenus.get(component);
		if (menus == null) {
			menus = new LinkedList();
		}
		menus.add(new MenuItem(menuPath, action));

		componentMenus.put(component, menus);
		updateMenuBar();
	}

	public void requestFocus(StudioComponent component) {
		int id = ((Integer) idsByComponent.get(component)).intValue();
		View view = viewsById.getView(id);

		view.restoreFocus();
	}
}
