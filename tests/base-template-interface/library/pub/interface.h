#pragma once

class BaseInterface
{
public:
  virtual ~BaseInterface() = default;
  virtual int F()          = 0;
};
