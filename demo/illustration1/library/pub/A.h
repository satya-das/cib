#pragma once

class LIBRARYAPI A
{
public:
  A();
  A(const A&);
  virtual ~A();

  int         F()     { return m1; }
  int         F(int)  { return m2; }
  virtual int V()     { return 5;  }

private:
  int   m1 {1};
  int   m2 {2};
};
