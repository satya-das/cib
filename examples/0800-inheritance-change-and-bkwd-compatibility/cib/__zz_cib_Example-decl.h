#pragma once

//! @def __zz_cib_decl
//! Calling convention to be used for functions
//! called from across component boundary

#if (defined(__x86_64__) && __x86_64__) || (defined(__ppc64__) && __ppc64__) || (defined(_WIN64) && _WIN64)
#  define __ZZ_CIB_ENV64BIT 1
#else
#  define __ZZ_CIB_ENV64BIT 0
#endif

#if __ZZ_CIB_ENV64BIT == 0
#  ifdef __GNUC__
#    define __zz_cib_decl __attribute__((stdcall))
#  elif defined(_WIN32)
#    define __zz_cib_decl __stdcall
#  endif
#endif

#ifndef __zz_cib_decl
#  define __zz_cib_decl
#endif
