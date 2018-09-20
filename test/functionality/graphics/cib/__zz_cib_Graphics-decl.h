#pragma once

//! @def __zz_cib_decl
//! Calling convention to be used for functions
//! called from across component boundary
#ifndef __zz_cib_decl
#  ifdef __GNUC__
#    define __zz_cib_decl __attribute__((stdcall))
#  elif defined(_WIN32)
#    define __zz_cib_decl __stdcall
#  endif
#endif
