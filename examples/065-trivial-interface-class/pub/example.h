#pragma once

// Just by having a virtual function makes the class interface
// Because client can override virtual method and library can end up calling client code.
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
