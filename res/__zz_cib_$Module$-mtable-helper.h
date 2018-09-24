#include "__zz_cib_$Module$-mtable.h"

#ifndef __zz_cib_MethodTableHelper_defined

namespace __zz_cib_ {

//! Helps in dealing with method table.
class __zz_cib_MethodTableHelper
{
public:
  __zz_cib_MethodTableHelper(__zz_cib_MethodTable _mtbl)
    : mtbl(_mtbl)
  {
  }

  //! Utility method to get method from method table.
  //! @param methodId ID for which method has to be fetched.
  //! @return Method of type specified as template parameter.
  template <typename _MethodType>
  _MethodType getMethod(std::uint32_t methodId) const
  {
    return reinterpret_cast<_MethodType>(__zz_cib_GetMethodEntry(mtbl, methodId));
  }

private:
  __zz_cib_MethodTable mtbl;
};

} // namespace __zz_cib_

#  define __zz_cib_MethodTableHelper_defined
#endif
