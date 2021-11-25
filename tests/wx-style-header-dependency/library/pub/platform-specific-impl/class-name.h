#pragma once

// Note that the header defining wxClassBase is not included from here

class wxClass : public wxClassBase
{
public:
  wxClass();

protected:
  int DoFunc() const override
  {
    return 9;
  }
};
