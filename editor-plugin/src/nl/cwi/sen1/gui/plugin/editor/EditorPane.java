package nl.cwi.sen1.gui.plugin.editor;

import java.awt.Color;
import java.awt.Event;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionAdapter;

import javax.swing.Action;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.JTextPane;
import javax.swing.KeyStroke;
import javax.swing.event.CaretEvent;
import javax.swing.event.CaretListener;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;
import javax.swing.text.BadLocationException;
import javax.swing.text.DefaultEditorKit;
import javax.swing.text.Style;
import javax.swing.text.StyleContext;
import javax.swing.text.DefaultHighlighter.DefaultHighlightPainter;
import javax.swing.text.Highlighter.HighlightPainter;

public class EditorPane extends JTextPane {
    private Style defaultStyle;

    private Object focusTag;

    private HighlightPainter focusPainter;

    private boolean modified;

    private JMenu menu;

    public EditorPane() {
        setEditorKit(new EditorKit(this));
        pauseUndo();

        addBindings();

        focusPainter = new DefaultHighlightPainter(Color.BLACK);
        defaultStyle = StyleContext.getDefaultStyleContext().getStyle(
                StyleContext.DEFAULT_STYLE);
        modified = false;
        getStyledDocument().setLogicalStyle(0, defaultStyle);
        resumeUndo();

        getDocument().addDocumentListener(new DocumentListener() {
            public void changedUpdate(DocumentEvent e) {
            }

            public void insertUpdate(DocumentEvent e) {
                modified = true;
            }

            public void removeUpdate(DocumentEvent e) {
                modified = true;
            }
        });

        addCaretListener(new CaretListener() {
            public void caretUpdate(CaretEvent e) {
                if (getSelectionStart() != getSelectionEnd()) {
                    clearFocus();
                }
            }
        });

        addMouseMotionListener(new MouseMotionAdapter() {
            public void mouseDragged(MouseEvent e) {
                clearFocus();
            }
        });
    }

    public void paintComponent(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;
        g2.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING,
                RenderingHints.VALUE_TEXT_ANTIALIAS_ON);
        g2.setRenderingHint(RenderingHints.KEY_RENDERING,
                RenderingHints.VALUE_RENDER_QUALITY);
        super.paintComponent(g2);
    }

    public void setFocusColor(Color color) {
        focusPainter = new DefaultHighlightPainter(color);
    }

    protected void addBinding(JMenu menu, int key, String name) {
        Action action = ((EditorKit) getEditorKit()).getAction(name);
        KeyStroke keyStroke = KeyStroke.getKeyStroke(key, Event.CTRL_MASK);

        getInputMap().put(keyStroke, name);
        JMenuItem item = new JMenuItem(action);
        item.setAccelerator(keyStroke);
        menu.add(item);
    }

    protected void addBindings() {
        menu = new JMenu("Edit");

        addBinding(menu, KeyEvent.VK_Z, EditorKit.undoAction);
        addBinding(menu, KeyEvent.VK_Y, EditorKit.redoAction);
        addBinding(menu, KeyEvent.VK_F, EditorKit.findAction);
        addBinding(menu, KeyEvent.VK_G, EditorKit.gotoLineAction);
        addBinding(menu, KeyEvent.VK_C, DefaultEditorKit.copyAction);
        addBinding(menu, KeyEvent.VK_X, DefaultEditorKit.cutAction);
        addBinding(menu, KeyEvent.VK_V, DefaultEditorKit.pasteAction);
    }

    public Style getDefaultStyle() {
        return defaultStyle;
    }

    public void setStyle(int offset, int length, String name) {
        pauseUndo();
        Style style = getStyle(name);
        getStyledDocument().setCharacterAttributes(offset, length, style, true);
        resumeUndo();
    }

    public void unsetStyles() {
        getStyledDocument().setCharacterAttributes(0,
                getDocument().getLength(), defaultStyle, true);
    }

    public void setCaretPositionAtEnd() {
        setCaretPosition(getDocument().getLength());
    }

    public void focus(int offset, int i) {
        clearFocus();

        try {
            focusTag = getHighlighter().addHighlight(offset, i, focusPainter);
        } catch (BadLocationException e) {
            // happens when you give an offset/length outside the editor
        }
    }

    public void clearFocus() {
        if (focusTag != null) {
            getHighlighter().removeHighlight(focusTag);
        }
    }

    public JMenu getEditorMenu() {
        return menu;
    }

    private void pauseUndo() {
        ((EditorKit) getEditorKit()).pauseUndo();
    }

    private void resumeUndo() {
        ((EditorKit) getEditorKit()).resumeUndo();
    }

    public void setText(String t) {
        pauseUndo();
        super.setText(t);
        modified = false;
        resumeUndo();
    }

    public void setCaretPosition(int position) {
        pauseUndo();
        super.setCaretPosition(position);
        resumeUndo();
    }

    public void setModified(boolean modified) {
        this.modified = modified;
    }

    public boolean isModified() {
        return modified;
    }

    public boolean find(String toBeFound, boolean caseInsensitive,
            boolean wrapAround, boolean forward) {
        String text = getText();

        if (caseInsensitive) {
            toBeFound = toBeFound.toLowerCase();
            text = text.toLowerCase();
        }

        int from;

        if (forward) {
            from = getCaretPosition();
        } else {
            from = getSelectionStart() - 1;
        }

        int index = findFromInText(text, toBeFound, from, forward);
        if (wrapAround && index == -1) {
            if (forward) {
                findFromInText(text, toBeFound, 0, forward);
            } else {
                findFromInText(text, toBeFound, getDocument().getLength(),
                        forward);
            }
        }

        return index != -1;
    }

    private int findFromInText(String text, String toBeFound, int from,
            boolean forward) {
        int index = -1;

        if (forward) {
            index = text.indexOf(toBeFound, from);
        } else {
            index = text.lastIndexOf(toBeFound, from);
        }

        if (index != -1) {
            setSelectionStart(index);
            setSelectionEnd(index + toBeFound.length());
        }
        return index;
    }

    public boolean replace(String toBeFound, String toReplaceWith,
            boolean caseInsensitive, boolean wrapAround, boolean forward) {
        if (find(toBeFound, caseInsensitive, wrapAround, forward)) {
            replaceSelection(toReplaceWith);
            return true;
        }
        return false;
    }

    public void replaceAll(String toBeFound, String toReplaceWith,
            boolean caseInsensitive) {
        int cursor = getCaretPosition();
        setCaretPosition(0);
        while (replace(toBeFound, toReplaceWith, caseInsensitive, false, true)) {
        }
        setCaretPosition(cursor);
    }

    public void gotoLine(int line) {
        String text = getText();
        int index = -1;
        int i = 1;

        if (line != -1) {
            if (line == 1) {
                index = 0;
            } else {
                do {
                    index = text.indexOf('\n', index + 1);
                    if (index != -1) {
                        i++;
                    }
                } while (index != -1 && i < line);
                if (index != -1) {
                    index++;
                }
            }

            if (index != -1) {
                setCaretPosition(index < text.length() ? index : index - 1);
            }
        }
    }
}
