
import toolbus.aterm.*;
import toolbus.tool.*;
import java.io.*;
import java.net.*;

class HelloTool extends Hello
{
  public HelloTool(String[] args) 
    throws UnknownHostException
  {
    super(args);
  }

  protected ATermRef getText() 
	throws ToolException
  {
    ATermPattern pattern = null;
    ATermRef result = null;

    try {
      pattern = new ATermPattern("snd-value(<str>)");
      result = pattern.make("Hello world in Java!\n"); 
    } catch (Exception e) {
      System.err.println("exception: " + e.toString());
      throw new ToolException(this, "parse and/or placeholder error");
    }
    return result;
  }

  protected void recTerminate(ATermRef arg)
  {
    System.out.print("rec-terminate received: ");
    arg.println(System.out);
  }

  public static void main(String[] args)
    throws IOException, UnknownHostException, ToolException
  {
    HelloTool T = new HelloTool(args);
    T.connect();
    T.run();
  }
}
