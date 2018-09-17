#pragma once

#include <cstddef>
#include <cstdint>

#ifndef __zz_cib_decl
#  ifdef __GNUC__
#    define __zz_cib_decl __attribute__((stdcall))
#  elif defined(_WIN32)
#    define __zz_cib_decl __stdcall
#  endif
#endif

#ifndef __zz_cib_import
#  if defined _WIN32 || defined __CYGWIN__
#    ifdef __GNUC__
#      define __zz_cib_import __attribute__((dllimport))
#    else
#      define __zz_cib_import __declspec(dllimport)
#    endif
#  else
#    if __GNUC__ >= 4
#      define __zz_cib_import __attribute__((visibility("default")))
#    else
#      define __zz_cib_import
#    endif
#  endif
#endif

namespace __zz_cib_ {
using __zz_cib_MethodEntry = void (*)();
//! Pointer of __zz_cib_MethodTableHeader is the first item in __zz_cib_MethodTable
struct __zz_cib_MethodTableHeader
{
  size_t size;       //!< sizeof(__zz_cib_MethodTableHeader)
  size_t numMethods; //!< Number of methods in method table.
};
using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;
} // namespace __zz_cib_

extern "C" __zz_cib_import __zz_cib_::__zz_cib_MethodTable __zz_cib_$MODULE$Lib_GetMethodTable(std::uint32_t classId);

namespace __zz_cib_ {
class __zz_cib_HANDLE;
}

#define __ZZ_CIB_CLASS_HELPER_NAME(fullName) __zz_cib_ fullName::__zz_cib_Helper

#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                                                               \
protected:                                                                                                             \
  className(__zz_cib_::__zz_cib_HANDLE* h);                                                                            \
                                                                                                                       \
private:                                                                                                               \
  friend class __ZZ_CIB_CLASS_HELPER_NAME(fullName);                                                                   \
  __zz_cib_::__zz_cib_HANDLE* __zz_cib_h_

#include <functional>
namespace __zz_cib_ {
inline __zz_cib_MethodEntry __zz_cib_GetMethodEntry(__zz_cib_MethodTable mtbl, std::uint32_t slot)
{
  auto mtblHeader = reinterpret_cast<__zz_cib_MethodTableHeader*>(mtbl[0]);
  if ((slot > mtblHeader->numMethods) || (mtbl[slot] == nullptr))
    throw std::bad_function_call();

  return mtbl[slot];
}
} // namespace __zz_cib_
