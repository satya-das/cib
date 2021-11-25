#pragma  once

#include "__zz_cib_internal/class-name-predef.h"

class wxClassBase
{
public:
  wxClassBase(wxClassBase&& rhs);
public:
  wxClassBase(const wxClassBase&);
  wxClassBase();
  virtual ~wxClassBase();
  int Func() const;
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(wxClassBase, wxClassBase);
};

#include "platform-specific-impl/class-name.h"
#include "__zz_cib_internal/class-name-postdef.h"
