#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

#ifndef __zz_cib_decl
#  ifdef __GNUC__
#    define __zz_cib_decl __attribute__((stdcall))
#  elif defined(_WIN32)
#    define __zz_cib_decl __stdcall
#  endif
#endif

#ifndef __zz_cib_export
#  if defined _WIN32 || defined __CYGWIN__
#    ifdef __GNUC__
#      define __zz_cib_export __attribute__((dllexport))
#    else
#      define __zz_cib_export __declspec(dllexport)
#    endif
#  else
#    if __GNUC__ >= 4
#      define __zz_cib_export __attribute__((visibility("default")))
#    else
#      define __zz_cib_export
#    endif
#  endif
#endif

namespace __zz_cib_ {
using __zz_cib_MethodEntry = void (*)();
using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;

//! Pointer of __zz_cib_MethodTableHeader is the first item in __zz_cib_MethodTable
struct __zz_cib_MethodTableHeader
{
  size_t size;       //!< sizeof(__zz_cib_MethodTableHeader)
  size_t numMethods; //!< Number of methods in method table.
};

class __zz_cib_PROXY;

inline __zz_cib_MethodEntry __zz_cib_GetMethodEntry(__zz_cib_MethodTable mtbl, std::uint32_t slot)
{
  auto mtblHeader = reinterpret_cast<const __zz_cib_MethodTableHeader*>(mtbl[0]);
  if ((slot > mtblHeader->numMethods) || (mtbl[slot] == nullptr))
    throw std::bad_function_call();

  return mtbl[slot];
}
} // namespace __zz_cib_
