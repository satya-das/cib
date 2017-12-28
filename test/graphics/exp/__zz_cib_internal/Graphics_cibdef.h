#pragma once

#include <cstdint>

namespace __zz_cib_ {
  using MethodEntry = void(*)();
  using MethodTable = const MethodEntry*;

  void GraphicsLib_GetMethodTable(std::uint32_t classId, MethodTable* pMethodTable, std::uint32_t* pLen);
}

namespace __zz_cib_ {
  class HANDLE;
}

#define __ZZ_CIB_CLASS_HELPER_NAME(fullName)                                  \
__zz_cib_##fullName##::__zz_cib_Helper

#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                      \
protected:                                                                    \
  className(__zz_cib_::HANDLE* h);                                            \
private:                                                                      \
  friend class __ZZ_CIB_CLASS_HELPER_NAME(fullName);                          \
  __zz_cib_::HANDLE*  __zz_cib_h_
