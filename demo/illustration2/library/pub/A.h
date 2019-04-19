#pragma once

class LIBRARYAPI I {
public:
  virtual int F() = 0;
  virtual ~I() {}
};

class LIBRARYAPI C {
public:
  C();
  C(const C&);
  ~C();

  virtual int UseInterface(I* pI) {
    return pI->F();
  }
};
