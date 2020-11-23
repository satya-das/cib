#pragma once



struct Base {
  Base() {}
  virtual ~Base() {}

  virtual int F() { return 1; }
  virtual int G() { return 2; }
};
