package tide.tool.ruleinspector;

import javax.swing.Icon;

import tide.tool.*;
import tide.tool.support.*;

public class RuleInspectorFactory
  implements ProcessToolFactory
{
  public static String NAME = "RuleInspector";
  private ToolManager manager;

  //{{{ public RuleInspectorFactory(ToolManager manager)

  public RuleInspectorFactory(ToolManager manager)
  {
    this.manager = manager;
  }

  //}}}
  //{{{ public ProcessTool createTool(DebugProcess process)

  public ProcessTool createTool(DebugProcess process)
  {
    ProcessTool tool = new RuleInspector(manager, process);
    return tool;
  }

  //}}}
  //{{{ public String getName()

  public String getName()
  {
    return "RuleInspector";
  }

  //}}}
  //{{{ public Icon getIcon()

  public Icon getIcon()
  {
    return null;
  }

  //}}}
}
