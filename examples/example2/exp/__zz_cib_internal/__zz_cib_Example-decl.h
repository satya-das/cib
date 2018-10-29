//! @def __zz_cib_decl
//! Calling convention to be used for functions
//! called from across component boundary
#ifdef __zz_cib_decl
#  undef __zz_cib_decl
#endif

#ifdef __GNUC__
#  define __zz_cib_decl __attribute__((stdcall))
#elif defined(_WIN32)
#  define __zz_cib_decl __stdcall
#endif
