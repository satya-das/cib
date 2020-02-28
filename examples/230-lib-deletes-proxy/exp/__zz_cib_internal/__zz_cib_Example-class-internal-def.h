#include "__zz_cib_Example-handle-helper.h"

#ifdef __ZZ_CIB_CLASS_INTERNAL_DEF
#  undef __ZZ_CIB_CLASS_INTERNAL_DEF
#endif

//! @def __ZZ_CIB_CLASS_NAME
//! Macro that helps passing template class name as parameter to anoher macro.
#define __ZZ_CIB_CLASS_NAME(...) __VA_ARGS__

//! @def __ZZ_CIB_CLASS_INTERNAL_DEF
//! Macro that allows cib to add it's hook in proxy classes
//! in a minimally invasive way.
#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                                                               \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_::__zz_cib_HANDLE* h);                                                                   \
                                                                                                                       \
private:                                                                                                               \
  friend class __zz_cib_::fullName::__zz_cib_Helper;                                                                   \
  friend struct __zz_cib_::fullName::__zz_cib_Delegator;                                                               \
  using __zz_cib_ThisClass = className;                                                                                \
  using __zz_cib_Helper    = __zz_cib_::fullName::__zz_cib_Helper;                                                     \
  __zz_cib_::__zz_cib_HANDLE* __zz_cib_h_
