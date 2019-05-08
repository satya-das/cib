//! @def __zz_cib_export
//! Function attribute that makes symbol externally visible
#ifdef __zz_cib_export
#  undef __zz_cib_export
#endif

#if defined _WIN32 || defined __CYGWIN__
#  ifdef __GNUC__
#    define __zz_cib_export __attribute__((dllexport))
#  else
#    define __zz_cib_export __declspec(dllexport)
#  endif
#else
#  if __GNUC__ >= 4
#    define __zz_cib_export __attribute__((visibility("default")))
#  else
#    define __zz_cib_export
#  endif
#endif
