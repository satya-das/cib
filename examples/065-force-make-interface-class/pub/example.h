#pragma once

class Interface
{
public:
  Interface();
  virtual ~Interface() {}
  int Func() { return DoFunc(); };

protected:
  virtual int DoFunc() const {
    return 500;
  }
};
