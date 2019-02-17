#pragma once

namespace __zz_cib_ { namespace Graphics { namespace Circle {
  //#= FullClassName: ::Graphics::Circle
  enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
  //#= FullClassName: ::Graphics::Composite
  enum { __zz_cib_classid = 2 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
  //#= FullClassName: ::Graphics::Context
  enum { __zz_cib_classid = 3 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Graphics::Context::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 4 };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
  //#= FullClassName: ::Graphics::Ellipse
  enum { __zz_cib_classid = 5 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  //#= FullClassName: ::Graphics::LogContext
  enum { __zz_cib_classid = 6 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
  //#= FullClassName: ::Graphics::Rectangle
  enum { __zz_cib_classid = 8 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
  //#= FullClassName: ::Graphics::Shape
  enum { __zz_cib_classid = 9 };
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Graphics::Shape::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 10 };
}}}}

namespace __zz_cib_ { namespace Point {
  //#= FullClassName: ::Point
  enum { __zz_cib_classid = 7 };
}}

namespace __zz_cib_ { namespace Graphics {
  enum { __zz_cib_next_class_id = 11 };
}}

namespace __zz_cib_ { namespace Graphics { namespace Circle { namespace __zz_cib_methodid {
  enum {
    //#= Circle(::Graphics::Circle const &);
    __zz_cib_copy_0 = 0,
    //#= ~Circle();
    __zz_cib_delete_1 = 1,
    //#= Circle(double, double, double);
    __zz_cib_new_2 = 2,
    //#= double Area() const;
    Area_3 = 3,
    //#= double Perimeter() const;
    Perimeter_4 = 4,
    //#= void Draw(::Graphics::Context*) const;
    Draw_5 = 5,
    //#= ::Graphics::Shape* CreateCircle(double, double, double);
    CreateCircle_6 = 6,
    //#= __zz_cib_cast_to___Graphics__Shape
    __zz_cib_cast_to___Graphics__Shape_7 = 7,
    __zz_cib_next_method_id = 8
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite { namespace __zz_cib_methodid {
  enum {
    //#= Composite(::Graphics::Composite const &);
    __zz_cib_copy_0 = 0,
    //#= ~Composite();
    __zz_cib_delete_1 = 1,
    //#= Composite();
    __zz_cib_new_2 = 2,
    //#= void Add(::Graphics::Shape*);
    Add_3 = 3,
    //#= size_t NumShapes() const;
    NumShapes_4 = 4,
    //#= ::Graphics::Shape* ShapeAt(size_t) const;
    ShapeAt_5 = 5,
    //#= double Area() const;
    Area_6 = 6,
    //#= double Perimeter() const;
    Perimeter_7 = 7,
    //#= void Draw(::Graphics::Context*) const;
    Draw_8 = 8,
    //#= ::Graphics::Composite* CreateCompositeOfRectAndCircle();
    CreateCompositeOfRectAndCircle_9 = 9,
    //#= __zz_cib_cast_to___Graphics__Shape
    __zz_cib_cast_to___Graphics__Shape_10 = 10,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_11 = 11,
    __zz_cib_next_method_id = 12
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_methodid {
  enum {
    //#= Context();
    __zz_cib_new_0 = 0,
    //#= void Line(double, double, double, double);
    Line_1 = 1,
    //#= void Rect(double, double, double, double);
    Rect_2 = 2,
    //#= void Circle(double, double, double);
    Circle_3 = 3,
    //#= void Ellipse(double, double, double, double);
    Ellipse_4 = 4,
    //#= ~Context();
    __zz_cib_delete_5 = 5,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_6 = 6,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_7 = 7,
    __zz_cib_next_method_id = 8
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= void Line(double, double, double, double);
    Line_0 = 0,
    //#= void Rect(double, double, double, double);
    Rect_1 = 1,
    //#= void Circle(double, double, double);
    Circle_2 = 2,
    //#= void Ellipse(double, double, double, double);
    Ellipse_3 = 3,
    //#= ~Context();
    __zz_cib_delete_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse { namespace __zz_cib_methodid {
  enum {
    //#= Ellipse(::Graphics::Ellipse const &);
    __zz_cib_copy_0 = 0,
    //#= ~Ellipse();
    __zz_cib_delete_1 = 1,
    //#= Ellipse(double, double, double, double);
    __zz_cib_new_2 = 2,
    //#= double Area() const;
    Area_3 = 3,
    //#= double Perimeter() const;
    Perimeter_4 = 4,
    //#= void Draw(::Graphics::Context*) const;
    Draw_5 = 5,
    //#= __zz_cib_cast_to___Graphics__Shape
    __zz_cib_cast_to___Graphics__Shape_6 = 6,
    __zz_cib_next_method_id = 7
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext { namespace __zz_cib_methodid {
  enum {
    //#= LogContext(::Graphics::LogContext const &);
    __zz_cib_copy_0 = 0,
    //#= LogContext();
    __zz_cib_new_1 = 1,
    //#= ~LogContext();
    __zz_cib_delete_2 = 2,
    //#= void Line(double, double, double, double);
    Line_3 = 3,
    //#= void Rect(double, double, double, double);
    Rect_4 = 4,
    //#= void Circle(double, double, double);
    Circle_5 = 5,
    //#= void Ellipse(double, double, double, double);
    Ellipse_6 = 6,
    //#= __zz_cib_cast_to___Graphics__Context
    __zz_cib_cast_to___Graphics__Context_7 = 7,
    __zz_cib_next_method_id = 8
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle { namespace __zz_cib_methodid {
  enum {
    //#= Rectangle(::Graphics::Rectangle const &);
    __zz_cib_copy_0 = 0,
    //#= ~Rectangle();
    __zz_cib_delete_1 = 1,
    //#= Rectangle(double, double, double, double);
    __zz_cib_new_2 = 2,
    //#= double Area() const;
    Area_3 = 3,
    //#= double Perimeter() const;
    Perimeter_4 = 4,
    //#= void Draw(::Graphics::Context*) const;
    Draw_5 = 5,
    //#= __zz_cib_cast_to___Graphics__Shape
    __zz_cib_cast_to___Graphics__Shape_6 = 6,
    __zz_cib_next_method_id = 7
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_methodid {
  enum {
    //#= Shape();
    __zz_cib_new_0 = 0,
    //#= double Area() const;
    Area_1 = 1,
    //#= double Perimeter() const;
    Perimeter_2 = 2,
    //#= void Draw(::Graphics::Context*) const;
    Draw_3 = 3,
    //#= ~Shape();
    __zz_cib_delete_4 = 4,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_5 = 5,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_6 = 6,
    __zz_cib_next_method_id = 7
  };
}}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= double Area() const;
    Area_0 = 0,
    //#= double Perimeter() const;
    Perimeter_1 = 1,
    //#= void Draw(::Graphics::Context*) const;
    Draw_2 = 2,
    //#= ~Shape();
    __zz_cib_delete_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}}}

namespace __zz_cib_ { namespace Point { namespace __zz_cib_methodid {
  enum {
    //#= Point(::Point const &);
    __zz_cib_copy_0 = 0,
    //#= ~Point();
    __zz_cib_delete_1 = 1,
    //#= Point(double, double);
    __zz_cib_new_2 = 2,
    //#= double X() const;
    X_3 = 3,
    //#= void X(double);
    X_4 = 4,
    //#= double Y() const;
    Y_5 = 5,
    //#= void Y(double);
    Y_6 = 6,
    //#= ::Point operator +(::Point const &) const;
    __zz_cib_OperatorPlus_7 = 7,
    //#= ::Point operator -(::Point) const;
    __zz_cib_OperatorMinus_8 = 8,
    __zz_cib_next_method_id = 9
  };
}}}

