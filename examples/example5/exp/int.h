#pragma  once

#include "__zz_cib_internal/int-predef.h"

namespace Example
{
  class Int
  {
  public:
    Int(Int&& rhs);
  public:
    Int(Int const & );
    ~Int();
    Int(int x = 0);
    operator int () const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Int, Example::Int);
  };
}

#include "__zz_cib_internal/int-impl.h"
