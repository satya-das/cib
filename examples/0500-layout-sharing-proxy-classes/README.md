# Layout Sharing Proxy Class

For simple class with standard layout having isolated proxy class can be too much overhead and may be avoidable performance penalty.
So, if the library author can guarantee that internal object layout will not change between releases then CIB can generate glue code to use same object layout for both original and proxy classes.
Such proxy class are called layout sharing proxy class. Layout sharing proxy class can be meaningful for classes that do not have any virtual table and also the class definition should be such that the compiler of both library and client deduce the same object size.

For example consider the following example:

```c++
#pragma once

class CPoint
{
public:
  CPoint(double _x = 0, double _y = 0, double _z = 0);
  ~CPoint() {}
  
  const CPoint& operator += (const CPoint& p) {
    x += p.x;
    y += p.y;
    z += p.z;

    return *this;
  }

public:
  double x;
  double y;
  double z;
};

```

There is almost no chance that object layout of this class will change in future. Isolated proxy class is needed to completely isolate layout of objects used by library and client. The reason is that a future change in library can alter the object layout and will enforce clients to recompile if layouts are not isolated. For a class like `CPoint` defined above such chance is meager if not completely ruled out. So, library developer can take a call to dictate to CIB to create layout sharing proxy class instead of isolated proxy class. That has some benefits:
1. Memory is saved as layout is shared between client and library.
2. It is possible to share raw object array across component boundary which is not possible for isolated proxy objects.

But library developer, when decide to use layout sharing proxy class for a particular class, must be careful as they would, had it been a struct in a C library. So, it should be used only with classes that follow standard layout and certainy that doesn't need vtable.

TODO: Add details about how to run cib and show cib generated code
