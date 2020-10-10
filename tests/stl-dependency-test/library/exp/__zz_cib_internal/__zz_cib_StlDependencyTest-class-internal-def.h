/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_StlDependencyTest-class-helper.h"
#include "__zz_cib_StlDependencyTest-generic-impl-facade.h"

namespace __zz_cib_ {

template <typename _ProxyClass>
struct __zz_cib_Delegator
{
};

} // namespace __zz_cib_

/**
 * @def __ZZ_CIB_CLASS_NAME
 * Macro that helps passing template class name as parameter to anoher macro.
 */
#define __ZZ_CIB_CLASS_NAME(...) __VA_ARGS__

/**
 * @def __ZZ_CIB_PROXY_CLASS_INTERNALS
 * Macro that allows cib to add it's hook in proxy classes
 * in a minimally invasive way.
 */
#define __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(className, fullName)                                                      \
public:                                                                                                                \
  class __zz_cib_Opaque;                                                                                               \
  using __zz_cib_AbiType = __zz_cib_Opaque*;                                                                           \
                                                                                                                       \
private:                                                                                                               \
  friend class __zz_cib_::__zz_cib_Helper<fullName>;                                                                   \
  friend struct __zz_cib_::__zz_cib_Delegator<fullName>;                                                               \
  using __zz_cib_ThisClass = className;                                                                                \
  using __zz_cib_MyHelper  = __zz_cib_::__zz_cib_Helper<fullName>;                                                     \
  __zz_cib_AbiType __zz_cib_h_;

#define __ZZ_CIB_PROXY_CLASS_INTERNALS(className, fullName)                                                            \
  __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(className, fullName)                                                            \
                                                                                                                       \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h);

#define __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(className, fullName)                                                         \
  __ZZ_CIB_PROXY_CLASS_INTERNALS_BASIC(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))                  \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h)                                                                               \
    : __zz_cib_h_(h)                                                                                                   \
  {                                                                                                                    \
    __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);                                                           \
  }

/**
 * @def __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS
 * Macro that allows cib to add it's hook in classes that share layout with library
 * in a minimally invasive way.
 */
#define __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS(className, fullName)                                                   \
public:                                                                                                                \
  using __zz_cib_AbiType = className*;                                                                                 \
                                                                                                                       \
private:                                                                                                               \
  using __zz_cib_ThisClass = className;                                                                                \
  using __zz_cib_MyHelper  = __zz_cib_::__zz_cib_Helper<fullName>

/**
 * @def __ZZ_CIB_FACADE_CLASS_INTERNALS
 * Macro that allows cib to add it's hook in classes that share layout with library
 * in a minimally invasive way.
 */
#define __ZZ_CIB_FACADE_CLASS_INTERNALS(className, fullName)                                                           \
  friend class __zz_cib_::__zz_cib_Generic<fullName>;                                                                  \
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))
