#pragma once

#include <cstdint>
#include <cstddef>


#ifndef __zz_cib_decl
# ifdef __GNUC__
#   define __zz_cib_decl __attribute__((stdcall))
# elif defined(_WIN32)
#   define __zz_cib_decl __stdcall
# endif
#endif


namespace __zz_cib_ {
  using MethodEntry = void(*)();
  //! Pointer of MethodTableHeader is the first item in MethodTable
  struct MethodTableHeader {
    size_t size; //!< sizeof(MethodTableHeader)
    size_t numMethods; //!< Number of methods in method table.
  };
  using MethodTable = const MethodEntry*;

  MethodTable PerfTestLib_GetMethodTable(std::uint32_t classId);
}

namespace __zz_cib_ {
  class HANDLE;
}

#define __ZZ_CIB_CLASS_HELPER_NAME(fullName)                                  \
__zz_cib_ fullName::__zz_cib_Helper

#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                      \
protected:                                                                    \
  className(__zz_cib_::HANDLE* h);                                            \
private:                                                                      \
  friend class __ZZ_CIB_CLASS_HELPER_NAME(fullName);                          \
  __zz_cib_::HANDLE*  __zz_cib_h_

