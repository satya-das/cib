#include "__zz_cib_$Module$-mtable.h"

#ifndef __zz_cib_Helper_defined

namespace __zz_cib_ {

//! Base class for helper class of proxy classes.
//! It only facilitates in dealing with method table.
class __zz_cib_Helper
{
protected:
  __zz_cib_Helper(__zz_cib_MethodTable _mtbl)
    : mtbl(_mtbl)
  {
  }

  //! Utility method to get method from method table.
  //! @param procId ID for which method has to be fetched.
  //! @return Method of type specified as template parameter.
  template <typename _ProcType>
  _ProcType getProc(std::uint32_t procId) const
  {
    return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(mtbl, procId));
  }

private:
  __zz_cib_MethodTable mtbl;
};

} // namespace __zz_cib_

#  define __zz_cib_Helper_defined
#endif
