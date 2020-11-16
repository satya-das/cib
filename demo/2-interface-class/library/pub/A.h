#pragma once

class LIBRARYAPI I {
public:
  virtual ~I() {}

  virtual int F() = 0;
};

class LIBRARYAPI C {
public:
  C();
  C(const C&);
  ~C();

  int UseInterface(I* pI);
};
