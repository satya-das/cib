#pragma once

//! @def __zz_cib_import
//! Function attribute that makes external symbol accessible
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
