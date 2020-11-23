#pragma once

struct BaseImpl;

struct Base {
  Base();
  virtual ~Base();

  virtual int F();
  virtual int G();

protected:
  Base(BaseImpl* pBaseImpl);
  BaseImpl* pImpl;
};
