package metastudio.graph;

  //{{{ imports

import aterm.pure.PureFactory;
  //}}}
public class MetaGraphFactory extends PureFactory
{
  //{{{ private members

  private aterm.AFun funGraph_Default;
  private Graph protoGraph_Default;
  private aterm.AFun funNodeList_Empty;
  private NodeList protoNodeList_Empty;
  private aterm.AFun funNodeList_Multi;
  private NodeList protoNodeList_Multi;
  private aterm.AFun funNode_Default;
  private Node protoNode_Default;
  private aterm.AFun funNodeId_Default;
  private NodeId protoNodeId_Default;
  private aterm.AFun funAttributeList_Empty;
  private AttributeList protoAttributeList_Empty;
  private aterm.AFun funAttributeList_Multi;
  private AttributeList protoAttributeList_Multi;
  private aterm.AFun funAttribute_Label;
  private Attribute protoAttribute_Label;
  private aterm.AFun funAttribute_Shape;
  private Attribute protoAttribute_Shape;
  private aterm.AFun funAttribute_Location;
  private Attribute protoAttribute_Location;
  private aterm.AFun funAttribute_Size;
  private Attribute protoAttribute_Size;
  private aterm.AFun funAttribute_CurvePoints;
  private Attribute protoAttribute_CurvePoints;
  private aterm.AFun funShape_Plaintext;
  private Shape protoShape_Plaintext;
  private aterm.AFun funShape_Ellipse;
  private Shape protoShape_Ellipse;
  private aterm.AFun funShape_Circle;
  private Shape protoShape_Circle;
  private aterm.AFun funShape_Egg;
  private Shape protoShape_Egg;
  private aterm.AFun funShape_Triangle;
  private Shape protoShape_Triangle;
  private aterm.AFun funShape_Box;
  private Shape protoShape_Box;
  private aterm.AFun funShape_Diamond;
  private Shape protoShape_Diamond;
  private aterm.AFun funShape_Trapezium;
  private Shape protoShape_Trapezium;
  private aterm.AFun funShape_Parallelogram;
  private Shape protoShape_Parallelogram;
  private aterm.AFun funShape_House;
  private Shape protoShape_House;
  private aterm.AFun funShape_Hexagon;
  private Shape protoShape_Hexagon;
  private aterm.AFun funShape_Octagon;
  private Shape protoShape_Octagon;
  private aterm.AFun funEdgeList_Empty;
  private EdgeList protoEdgeList_Empty;
  private aterm.AFun funEdgeList_Multi;
  private EdgeList protoEdgeList_Multi;
  private aterm.AFun funEdge_Default;
  private Edge protoEdge_Default;
  private aterm.AFun funPolygon_Empty;
  private Polygon protoPolygon_Empty;
  private aterm.AFun funPolygon_Multi;
  private Polygon protoPolygon_Multi;
  private aterm.AFun funPoint_Default;
  private Point protoPoint_Default;
  //}}}
  public MetaGraphFactory()
  {
     super();
     initialize();
  }

  public MetaGraphFactory(int logSize)
  {
     super(logSize);
     initialize();
  }

  private void initialize()
  {
    Graph.initialize(this);

    Graph_Default.initializePattern();
    funGraph_Default = makeAFun("Graph_Default", 2, false);
    protoGraph_Default = new Graph_Default();

    NodeList.initialize(this);

    NodeList_Empty.initializePattern();
    funNodeList_Empty = makeAFun("NodeList_Empty", 0, false);
    protoNodeList_Empty = new NodeList_Empty();

    NodeList_Multi.initializePattern();
    funNodeList_Multi = makeAFun("NodeList_Multi", 2, false);
    protoNodeList_Multi = new NodeList_Multi();

    Node.initialize(this);

    Node_Default.initializePattern();
    funNode_Default = makeAFun("Node_Default", 2, false);
    protoNode_Default = new Node_Default();

    NodeId.initialize(this);

    NodeId_Default.initializePattern();
    funNodeId_Default = makeAFun("NodeId_Default", 1, false);
    protoNodeId_Default = new NodeId_Default();

    AttributeList.initialize(this);

    AttributeList_Empty.initializePattern();
    funAttributeList_Empty = makeAFun("AttributeList_Empty", 0, false);
    protoAttributeList_Empty = new AttributeList_Empty();

    AttributeList_Multi.initializePattern();
    funAttributeList_Multi = makeAFun("AttributeList_Multi", 2, false);
    protoAttributeList_Multi = new AttributeList_Multi();

    Attribute.initialize(this);

    Attribute_Label.initializePattern();
    funAttribute_Label = makeAFun("Attribute_Label", 1, false);
    protoAttribute_Label = new Attribute_Label();

    Attribute_Shape.initializePattern();
    funAttribute_Shape = makeAFun("Attribute_Shape", 1, false);
    protoAttribute_Shape = new Attribute_Shape();

    Attribute_Location.initializePattern();
    funAttribute_Location = makeAFun("Attribute_Location", 2, false);
    protoAttribute_Location = new Attribute_Location();

    Attribute_Size.initializePattern();
    funAttribute_Size = makeAFun("Attribute_Size", 2, false);
    protoAttribute_Size = new Attribute_Size();

    Attribute_CurvePoints.initializePattern();
    funAttribute_CurvePoints = makeAFun("Attribute_CurvePoints", 1, false);
    protoAttribute_CurvePoints = new Attribute_CurvePoints();

    Shape.initialize(this);

    Shape_Plaintext.initializePattern();
    funShape_Plaintext = makeAFun("Shape_Plaintext", 0, false);
    protoShape_Plaintext = new Shape_Plaintext();

    Shape_Ellipse.initializePattern();
    funShape_Ellipse = makeAFun("Shape_Ellipse", 0, false);
    protoShape_Ellipse = new Shape_Ellipse();

    Shape_Circle.initializePattern();
    funShape_Circle = makeAFun("Shape_Circle", 0, false);
    protoShape_Circle = new Shape_Circle();

    Shape_Egg.initializePattern();
    funShape_Egg = makeAFun("Shape_Egg", 0, false);
    protoShape_Egg = new Shape_Egg();

    Shape_Triangle.initializePattern();
    funShape_Triangle = makeAFun("Shape_Triangle", 0, false);
    protoShape_Triangle = new Shape_Triangle();

    Shape_Box.initializePattern();
    funShape_Box = makeAFun("Shape_Box", 0, false);
    protoShape_Box = new Shape_Box();

    Shape_Diamond.initializePattern();
    funShape_Diamond = makeAFun("Shape_Diamond", 0, false);
    protoShape_Diamond = new Shape_Diamond();

    Shape_Trapezium.initializePattern();
    funShape_Trapezium = makeAFun("Shape_Trapezium", 0, false);
    protoShape_Trapezium = new Shape_Trapezium();

    Shape_Parallelogram.initializePattern();
    funShape_Parallelogram = makeAFun("Shape_Parallelogram", 0, false);
    protoShape_Parallelogram = new Shape_Parallelogram();

    Shape_House.initializePattern();
    funShape_House = makeAFun("Shape_House", 0, false);
    protoShape_House = new Shape_House();

    Shape_Hexagon.initializePattern();
    funShape_Hexagon = makeAFun("Shape_Hexagon", 0, false);
    protoShape_Hexagon = new Shape_Hexagon();

    Shape_Octagon.initializePattern();
    funShape_Octagon = makeAFun("Shape_Octagon", 0, false);
    protoShape_Octagon = new Shape_Octagon();

    EdgeList.initialize(this);

    EdgeList_Empty.initializePattern();
    funEdgeList_Empty = makeAFun("EdgeList_Empty", 0, false);
    protoEdgeList_Empty = new EdgeList_Empty();

    EdgeList_Multi.initializePattern();
    funEdgeList_Multi = makeAFun("EdgeList_Multi", 2, false);
    protoEdgeList_Multi = new EdgeList_Multi();

    Edge.initialize(this);

    Edge_Default.initializePattern();
    funEdge_Default = makeAFun("Edge_Default", 3, false);
    protoEdge_Default = new Edge_Default();

    Polygon.initialize(this);

    Polygon_Empty.initializePattern();
    funPolygon_Empty = makeAFun("Polygon_Empty", 0, false);
    protoPolygon_Empty = new Polygon_Empty();

    Polygon_Multi.initializePattern();
    funPolygon_Multi = makeAFun("Polygon_Multi", 2, false);
    protoPolygon_Multi = new Polygon_Multi();

    Point.initialize(this);

    Point_Default.initializePattern();
    funPoint_Default = makeAFun("Point_Default", 2, false);
    protoPoint_Default = new Point_Default();

  }

  //{{{ make Graph_Default

  protected Graph makeGraph_Default(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoGraph_Default) {
      protoGraph_Default.initHashCode(annos,fun,args);
      return (Graph) build(protoGraph_Default);
    }
  }

  public Graph makeGraph_Default(NodeList _nodes, EdgeList _edges) {
    aterm.ATerm[] args = new aterm.ATerm[] {_nodes, _edges};
    return makeGraph_Default( funGraph_Default, args, empty);
  }

  //{{{ make NodeList_Empty

  protected NodeList makeNodeList_Empty(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoNodeList_Empty) {
      protoNodeList_Empty.initHashCode(annos,fun,args);
      return (NodeList) build(protoNodeList_Empty);
    }
  }

  public NodeList makeNodeList_Empty() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeNodeList_Empty( funNodeList_Empty, args, empty);
  }

  //{{{ make NodeList_Multi

  protected NodeList makeNodeList_Multi(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoNodeList_Multi) {
      protoNodeList_Multi.initHashCode(annos,fun,args);
      return (NodeList) build(protoNodeList_Multi);
    }
  }

  public NodeList makeNodeList_Multi(Node _head, NodeList _tail) {
    aterm.ATerm[] args = new aterm.ATerm[] {_head, _tail};
    return makeNodeList_Multi( funNodeList_Multi, args, empty);
  }

  //{{{ make Node_Default

  protected Node makeNode_Default(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoNode_Default) {
      protoNode_Default.initHashCode(annos,fun,args);
      return (Node) build(protoNode_Default);
    }
  }

  public Node makeNode_Default(NodeId _id, AttributeList _attributes) {
    aterm.ATerm[] args = new aterm.ATerm[] {_id, _attributes};
    return makeNode_Default( funNode_Default, args, empty);
  }

  //{{{ make NodeId_Default

  protected NodeId makeNodeId_Default(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoNodeId_Default) {
      protoNodeId_Default.initHashCode(annos,fun,args);
      return (NodeId) build(protoNodeId_Default);
    }
  }

  public NodeId makeNodeId_Default(String _id) {
    aterm.ATerm[] args = new aterm.ATerm[] {makeAppl(makeAFun(_id, 0, true))};
    return makeNodeId_Default( funNodeId_Default, args, empty);
  }

  //{{{ make AttributeList_Empty

  protected AttributeList makeAttributeList_Empty(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttributeList_Empty) {
      protoAttributeList_Empty.initHashCode(annos,fun,args);
      return (AttributeList) build(protoAttributeList_Empty);
    }
  }

  public AttributeList makeAttributeList_Empty() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeAttributeList_Empty( funAttributeList_Empty, args, empty);
  }

  //{{{ make AttributeList_Multi

  protected AttributeList makeAttributeList_Multi(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttributeList_Multi) {
      protoAttributeList_Multi.initHashCode(annos,fun,args);
      return (AttributeList) build(protoAttributeList_Multi);
    }
  }

  public AttributeList makeAttributeList_Multi(Attribute _head, AttributeList _tail) {
    aterm.ATerm[] args = new aterm.ATerm[] {_head, _tail};
    return makeAttributeList_Multi( funAttributeList_Multi, args, empty);
  }

  //{{{ make Attribute_Label

  protected Attribute makeAttribute_Label(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttribute_Label) {
      protoAttribute_Label.initHashCode(annos,fun,args);
      return (Attribute) build(protoAttribute_Label);
    }
  }

  public Attribute makeAttribute_Label(String _label) {
    aterm.ATerm[] args = new aterm.ATerm[] {makeAppl(makeAFun(_label, 0, true))};
    return makeAttribute_Label( funAttribute_Label, args, empty);
  }

  //{{{ make Attribute_Shape

  protected Attribute makeAttribute_Shape(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttribute_Shape) {
      protoAttribute_Shape.initHashCode(annos,fun,args);
      return (Attribute) build(protoAttribute_Shape);
    }
  }

  public Attribute makeAttribute_Shape(Shape _shape) {
    aterm.ATerm[] args = new aterm.ATerm[] {_shape};
    return makeAttribute_Shape( funAttribute_Shape, args, empty);
  }

  //{{{ make Attribute_Location

  protected Attribute makeAttribute_Location(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttribute_Location) {
      protoAttribute_Location.initHashCode(annos,fun,args);
      return (Attribute) build(protoAttribute_Location);
    }
  }

  public Attribute makeAttribute_Location(Integer _x, Integer _y) {
    aterm.ATerm[] args = new aterm.ATerm[] {makeInt(_x.intValue()), makeInt(_y.intValue())};
    return makeAttribute_Location( funAttribute_Location, args, empty);
  }

  //{{{ make Attribute_Size

  protected Attribute makeAttribute_Size(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttribute_Size) {
      protoAttribute_Size.initHashCode(annos,fun,args);
      return (Attribute) build(protoAttribute_Size);
    }
  }

  public Attribute makeAttribute_Size(Integer _width, Integer _height) {
    aterm.ATerm[] args = new aterm.ATerm[] {makeInt(_width.intValue()), makeInt(_height.intValue())};
    return makeAttribute_Size( funAttribute_Size, args, empty);
  }

  //{{{ make Attribute_CurvePoints

  protected Attribute makeAttribute_CurvePoints(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoAttribute_CurvePoints) {
      protoAttribute_CurvePoints.initHashCode(annos,fun,args);
      return (Attribute) build(protoAttribute_CurvePoints);
    }
  }

  public Attribute makeAttribute_CurvePoints(Polygon _points) {
    aterm.ATerm[] args = new aterm.ATerm[] {_points};
    return makeAttribute_CurvePoints( funAttribute_CurvePoints, args, empty);
  }

  //{{{ make Shape_Plaintext

  protected Shape makeShape_Plaintext(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Plaintext) {
      protoShape_Plaintext.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Plaintext);
    }
  }

  public Shape makeShape_Plaintext() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Plaintext( funShape_Plaintext, args, empty);
  }

  //{{{ make Shape_Ellipse

  protected Shape makeShape_Ellipse(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Ellipse) {
      protoShape_Ellipse.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Ellipse);
    }
  }

  public Shape makeShape_Ellipse() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Ellipse( funShape_Ellipse, args, empty);
  }

  //{{{ make Shape_Circle

  protected Shape makeShape_Circle(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Circle) {
      protoShape_Circle.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Circle);
    }
  }

  public Shape makeShape_Circle() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Circle( funShape_Circle, args, empty);
  }

  //{{{ make Shape_Egg

  protected Shape makeShape_Egg(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Egg) {
      protoShape_Egg.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Egg);
    }
  }

  public Shape makeShape_Egg() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Egg( funShape_Egg, args, empty);
  }

  //{{{ make Shape_Triangle

  protected Shape makeShape_Triangle(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Triangle) {
      protoShape_Triangle.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Triangle);
    }
  }

  public Shape makeShape_Triangle() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Triangle( funShape_Triangle, args, empty);
  }

  //{{{ make Shape_Box

  protected Shape makeShape_Box(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Box) {
      protoShape_Box.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Box);
    }
  }

  public Shape makeShape_Box() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Box( funShape_Box, args, empty);
  }

  //{{{ make Shape_Diamond

  protected Shape makeShape_Diamond(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Diamond) {
      protoShape_Diamond.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Diamond);
    }
  }

  public Shape makeShape_Diamond() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Diamond( funShape_Diamond, args, empty);
  }

  //{{{ make Shape_Trapezium

  protected Shape makeShape_Trapezium(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Trapezium) {
      protoShape_Trapezium.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Trapezium);
    }
  }

  public Shape makeShape_Trapezium() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Trapezium( funShape_Trapezium, args, empty);
  }

  //{{{ make Shape_Parallelogram

  protected Shape makeShape_Parallelogram(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Parallelogram) {
      protoShape_Parallelogram.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Parallelogram);
    }
  }

  public Shape makeShape_Parallelogram() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Parallelogram( funShape_Parallelogram, args, empty);
  }

  //{{{ make Shape_House

  protected Shape makeShape_House(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_House) {
      protoShape_House.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_House);
    }
  }

  public Shape makeShape_House() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_House( funShape_House, args, empty);
  }

  //{{{ make Shape_Hexagon

  protected Shape makeShape_Hexagon(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Hexagon) {
      protoShape_Hexagon.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Hexagon);
    }
  }

  public Shape makeShape_Hexagon() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Hexagon( funShape_Hexagon, args, empty);
  }

  //{{{ make Shape_Octagon

  protected Shape makeShape_Octagon(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoShape_Octagon) {
      protoShape_Octagon.initHashCode(annos,fun,args);
      return (Shape) build(protoShape_Octagon);
    }
  }

  public Shape makeShape_Octagon() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeShape_Octagon( funShape_Octagon, args, empty);
  }

  //{{{ make EdgeList_Empty

  protected EdgeList makeEdgeList_Empty(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoEdgeList_Empty) {
      protoEdgeList_Empty.initHashCode(annos,fun,args);
      return (EdgeList) build(protoEdgeList_Empty);
    }
  }

  public EdgeList makeEdgeList_Empty() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makeEdgeList_Empty( funEdgeList_Empty, args, empty);
  }

  //{{{ make EdgeList_Multi

  protected EdgeList makeEdgeList_Multi(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoEdgeList_Multi) {
      protoEdgeList_Multi.initHashCode(annos,fun,args);
      return (EdgeList) build(protoEdgeList_Multi);
    }
  }

  public EdgeList makeEdgeList_Multi(Edge _head, EdgeList _tail) {
    aterm.ATerm[] args = new aterm.ATerm[] {_head, _tail};
    return makeEdgeList_Multi( funEdgeList_Multi, args, empty);
  }

  //{{{ make Edge_Default

  protected Edge makeEdge_Default(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoEdge_Default) {
      protoEdge_Default.initHashCode(annos,fun,args);
      return (Edge) build(protoEdge_Default);
    }
  }

  public Edge makeEdge_Default(NodeId _from, NodeId _to, AttributeList _attributes) {
    aterm.ATerm[] args = new aterm.ATerm[] {_from, _to, _attributes};
    return makeEdge_Default( funEdge_Default, args, empty);
  }

  //{{{ make Polygon_Empty

  protected Polygon makePolygon_Empty(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoPolygon_Empty) {
      protoPolygon_Empty.initHashCode(annos,fun,args);
      return (Polygon) build(protoPolygon_Empty);
    }
  }

  public Polygon makePolygon_Empty() {
    aterm.ATerm[] args = new aterm.ATerm[] {};
    return makePolygon_Empty( funPolygon_Empty, args, empty);
  }

  //{{{ make Polygon_Multi

  protected Polygon makePolygon_Multi(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoPolygon_Multi) {
      protoPolygon_Multi.initHashCode(annos,fun,args);
      return (Polygon) build(protoPolygon_Multi);
    }
  }

  public Polygon makePolygon_Multi(Point _head, Polygon _tail) {
    aterm.ATerm[] args = new aterm.ATerm[] {_head, _tail};
    return makePolygon_Multi( funPolygon_Multi, args, empty);
  }

  //{{{ make Point_Default

  protected Point makePoint_Default(aterm.AFun fun, aterm.ATerm[] args, aterm.ATermList annos) {
    synchronized (protoPoint_Default) {
      protoPoint_Default.initHashCode(annos,fun,args);
      return (Point) build(protoPoint_Default);
    }
  }

  public Point makePoint_Default(Integer _x, Integer _y) {
    aterm.ATerm[] args = new aterm.ATerm[] {makeInt(_x.intValue()), makeInt(_y.intValue())};
    return makePoint_Default( funPoint_Default, args, empty);
  }

}
