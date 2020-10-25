#pragma  once

#include "__zz_cib_internal/int-predef.h"

namespace Example
{
  class Int
  {
  public:
    Int(Int&& rhs);
  public:
    Int(const Int& );
    ~Int();
    Int(int x = 0);
    operator int () const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(Int, Example::Int);
  };
}

#include "__zz_cib_internal/int-postdef.h"
