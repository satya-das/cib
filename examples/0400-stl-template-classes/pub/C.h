#pragma once

#include "../cib/__zz_cib_Example-proxy-mgr.h"

class C : public __zz_cib_::__zz_cib_ProxyManager
{
public:
  C(int x = 0);
  virtual ~C() = default;

public:
  virtual int f() const {
    return m;
  }

private:
  char disturbSize[11];
  int m;
};
