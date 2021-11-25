#pragma  once

#include "__zz_cib_internal/platform-specific-impl/class-name-predef.h"

// Note that the header defining wxClassBase is not included from here
class wxClass : public ::wxClassBase
{
public:
  wxClass(wxClass&& rhs);
public:
  wxClass(const wxClass&);
  ~wxClass();
  wxClass();
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(wxClass, wxClass);
};

#include "__zz_cib_internal/platform-specific-impl/class-name-postdef.h"
