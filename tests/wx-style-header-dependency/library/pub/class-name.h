#pragma once

class wxClassBase
{
public:
  wxClassBase();
  virtual ~wxClassBase();

  int Func() const
  {
    return DoFunc();
  }

protected:
  virtual int DoFunc() const
  {
    return 0;
  }
};

#include "platform-specific-impl/class-name.h"
