#ifdef __ZZ_CIB_CLASS_INTERNAL_DEF
#  undef __ZZ_CIB_CLASS_INTERNAL_DEF
#endif

//! @def __ZZ_CIB_CLASS_INTERNAL_DEF
//! Macro that allows cib to add it's hook in proxy classes in a minimally
//! invasive way.
#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                                                               \
protected:                                                                                                             \
  className(__zz_cib_::__zz_cib_HANDLE* h);                                                                            \
                                                                                                                       \
private:                                                                                                               \
  friend class __zz_cib_::fullName::__zz_cib_Helper;                                                                   \
  friend __zz_cib_::__zz_cib_HandleHelper<fullName, __zz_cib_::fullName::__zz_cib_Helper>;                             \
  __zz_cib_::__zz_cib_HANDLE* __zz_cib_h_
