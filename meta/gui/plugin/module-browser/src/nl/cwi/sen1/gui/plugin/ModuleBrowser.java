package nl.cwi.sen1.gui.plugin;

import java.awt.Color;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JComponent;
import javax.swing.JPanel;
import javax.swing.JSplitPane;
import javax.swing.SwingUtilities;

import nl.cwi.sen1.data.Module;
import nl.cwi.sen1.data.ModuleTreeModel;
import nl.cwi.sen1.data.graph.Graph;
import nl.cwi.sen1.data.graph.MetaGraphFactory;
import nl.cwi.sen1.data.graph.Node;
import nl.cwi.sen1.gui.Studio;
import nl.cwi.sen1.gui.StudioPlugin;
import nl.cwi.sen1.util.Preferences;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermFactory;
import aterm.ATermList;

public class ModuleBrowser implements StudioPlugin, ModuleBrowserTif {
	private static final String TOOL_NAME = "module-browser";

	private ModuleBrowserBridge bridge;

	private ZoomableGraphPanel importGraphPanel;

	private ModuleInfoPanel moduleStatus;

	private ModuleTreeModel moduleManager;

	private MetaGraphFactory metaGraphFactory;

	private ModulePopupMenu popup;

	private JPanel panel;

	private Studio studio;

	private ZoomableGraphPanel createModuleGraph() {
		ZoomableGraphPanel panel = new ZoomableGraphPanel(metaGraphFactory,
				"import-graph");
		Color color = Preferences.getColor("graphpane.background");
		panel.setName("Import Graph");
		panel.setBackground(color);
		return panel;
	}

	private void createModuleStatusPanel() {
		moduleStatus = new ModuleInfoPanel(studio.getFactory(), moduleManager);
	}

	private MouseListener makeMouseListener(final ModuleTreeModel manager) {
		MouseListener listener = new MouseAdapter() {
			public void mousePressed(MouseEvent event) {
				Node node = importGraphPanel.getNodeAt(event.getX(), event
						.getY());
				ModulePopupMenu.setPopupLocation(
						(JComponent) event.getSource(), event.getX(), event
								.getY());

				Module module;

				if (node == null) {
					module = null;
				} else {
					module = manager.getModule(node.getId().getId());
					if (event.isPopupTrigger()
							|| SwingUtilities.isRightMouseButton(event)) {
						postModuleMenuRequest(module);
					}

				}
				manager.selectModule(module);

			}

			public void mouseReleased(MouseEvent e) {
				mousePressed(e);
			}
		};
		return listener;
	}

	public void moduleSelected(Module module) {
		if (module == null) {
			importGraphPanel.setSelectedNode(null);
		} else {
			importGraphPanel.setSelectedNode(importGraphPanel.getNode(module
					.getName()));
		}
	}

	private void setModules(ATermList importList) {
		moduleManager.clearModules();

		while (!importList.isEmpty()) {
			ATermList importPair = (ATermList) importList.getFirst();
			importList = importList.getNext();
			ATermAppl moduleTerm = (ATermAppl) importPair.getFirst();
			String name = moduleTerm.getName();
			addModule(name);
		}
	}

	private Module addModule(String name) {
		Module module = moduleManager.getModule(name);
		if (module == null) {
			module = new Module(name);
			moduleManager.addModule(module);
		}

		return module;
	}

	private void setImports(ATermList importList) {

		while (!importList.isEmpty()) {
			ATermList importPair = (ATermList) importList.getFirst();
			importList = importList.getNext();

			ATermAppl fromTerm = (ATermAppl) importPair.getFirst();
			String from = fromTerm.getName();
			Module moduleFrom = moduleManager.getModule(from);
			if (moduleFrom == null) {
				moduleFrom = addModule(from);
				moduleFrom.setState(Module.STATE_NEW);
			}

			ATermList imports = (ATermList) importPair.elementAt(1);

			while (!imports.isEmpty()) {
				ATermAppl toTerm = (ATermAppl) imports.getFirst();
				imports = imports.getNext();

				String to = toTerm.getName();
				Module moduleTo = moduleManager.getModule(to);
				if (moduleTo == null) {
					moduleTo = addModule(to);
					moduleTo.setState(Module.STATE_NEW);
				}

				moduleFrom.addChild(to);
				moduleTo.addParent(from);
			}
		}
	}

	public void displayTreelist(String id, ATerm termList) {
		ATermList modules = (ATermList) termList;
		setModules(modules);
		setImports(modules);
	}

	public void displayGraph(String id, ATerm graphTerm) {
		Graph graph = metaGraphFactory.GraphFromTerm(graphTerm);
		importGraphPanel.setGraph(graph);
		panel.setVisible(true);
		importGraphPanel.repaint();
	}

	private JSplitPane createLeftPane() {
		ModuleTree moduleTree = new ModuleTree(studio.getFactory(), this,
				moduleManager);

		createModuleStatusPanel();

		JSplitPane leftPanel = new JSplitPane(JSplitPane.VERTICAL_SPLIT,
				moduleTree, moduleStatus);
		leftPanel.setOneTouchExpandable(true);
		leftPanel.setDividerLocation(Preferences
				.getDouble("modulebrowser.graph.divider.location"));
		leftPanel.setResizeWeight(Preferences
				.getDouble("modulebrowser.graph.divider.resize"));
		return leftPanel;
	}

	public void postModuleMenuRequest(Module current) {
		ATermFactory factory = studio.getFactory();
		ATerm popup = factory.parse("module-popup");

		if (current.getState() == Module.STATE_NEW) {
			popup = factory.parse("new-module-popup");
		}

		bridge.postEvent(factory.make("get-events(<term>,<str>)", popup,
				current.getName()));
	}

	public void addEvents(ATerm t0, String s1, ATerm t2) {
		popup.addEvents(t0, s1, t2);
	}

	public void recAckEvent(ATerm t0) {

	}

	public void recTerminate(ATerm t0) {
	}

	public String getName() {
		return TOOL_NAME;
	}

	public void initStudioPlugin(Studio studio) {
		this.studio = studio;
		ModuleBrowserBridge bridge = new ModuleBrowserBridge(studio
				.getFactory(), this);
		bridge.setLockObject(this);
		studio.connect(getName(), bridge);

		addModuleBrowserGUI();
	}

	private void addModuleBrowserGUI() {
		moduleManager = new ModuleTreeModel();
		// moduleManager.addModuleSelectionListener(this);
		ModuleTree tree = new ModuleTree(studio.getFactory(), this,
				moduleManager);
		tree.setName("Module Hierarchy");
		studio.addComponent(tree);

		importGraphPanel = createModuleGraph();
		// importGraphPanel.addMouseListener(makeMouseListener(moduleManager));
		studio.addComponent(importGraphPanel);
	}
}
