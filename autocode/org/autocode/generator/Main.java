package org.autocode.generator;

import org.autocode.property.*;
import org.autocode.property.parser.*;

import java.io.*;
import java.util.*;

public class Main
{
  //{{{ public static final void main(String[] args)

  public static final void main(String[] args)
    throws IOException, ParseException, ClassNotFoundException, InstantiationException, IllegalAccessException
  {
    new Main(args);
  }

  //}}}

  //{{{ private void Main(String[] args)

  private Main(String[] args)
    throws IOException, ParseException, ClassNotFoundException, InstantiationException, IllegalAccessException
  {
    PropertyForest forest;
    String application = "";
    List files = new LinkedList();

    for (int i=0; i<args.length; i++) {
      if (args[i].equals("--define") || args[i].equals("-D")) {
	i++;
      } else if (args[i].equals("--application") || args[i].equals("-a")) {
	application = args[++i];
      } else if (args[i].startsWith("-")) {
	throw new IllegalArgumentException(args[i]);
      } else {
	files.add(args[i]);
      }
    }

    // Read Autocode defaults
    String defaults = "AutocodeGenerator.aco";
    InputStream stream = getClass().getResourceAsStream(defaults);
    Reader reader = new InputStreamReader(stream);
    PropertyParser parser = new PropertyParser(reader);
    forest = parser.PropertyForest();
    reader.close();

    System.out.println("properties: " + forest);

    Iterator iter = files.iterator();
    while (iter.hasNext()) {
      String fileName = (String)iter.next();
      reader = new FileReader(fileName);
      parser.ReInit(reader);
      //parser = new PropertyParser(reader);
      forest.merge(parser.PropertyForest());
      reader.close();
    }

    if (application == null) {
      throw new IllegalArgumentException("missing application");
    }

    PropertyContext root = new PropertyContext(forest);

    PropertyContext appContext = new PropertyContext(root, "application",
						     application);
    Set generators = appContext.getValueSet("generator");
    System.out.println("generators: " + generators);

    iter = generators.iterator();
    while (iter.hasNext()) {
      String generatorName = (String)iter.next();
      PropertyContext genContext =
	new PropertyContext(appContext, "generator", generatorName);

      String className = genContext.getSingletonValue("class");

      /*
      defaults = "/" + className.replace('.', '/') + ".aco";
      stream = getClass().getResourceAsStream(defaults);
      reader = new InputStreamReader(stream);
      parser.ReInit(reader);
      genContext.merge(parser.PropertyForest());
      reader.close();
      */

      if (genContext.getBoolean("enabled")) {
	// Generator is active!
	System.out.println("Activating generator: " + generatorName
			   + " (" + className + ")");
	Class generatorClass = Class.forName(className);
	AutocodeGenerator generator =
	  (AutocodeGenerator)generatorClass.newInstance();
	generator.generate(genContext);
      }
    }
  }

  //}}}
}
