#pragma once

#include "__zz_cib_Graphics-mtable.h"

namespace __zz_cib_ {
namespace Graphics {

class __zz_cib_Helper
{
protected:
  __zz_cib_Helper(__zz_cib_MethodTable _mtbl)
    : mtbl(_mtbl)
  {
  }

  template <typename _ProcType>
  _ProcType getProc(std::uint32_t procId) const
  {
    return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(mtbl, procId));
  }

private:
  __zz_cib_MethodTable mtbl;
};

} // namespace Graphics
} // namespace __zz_cib_
