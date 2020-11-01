/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include "__zz_cib_CibPoDoFo-class-helper.h"
#include "__zz_cib_CibPoDoFo-delegator.h"
#include "__zz_cib_CibPoDoFo-generic.h"

/**
 * @def __ZZ_CIB_CLASS_NAME
 * Helps passing template class name as parameter to anoher macro.
 * @note It is basically a workaround to avoid error when template class name with angle bracket and parameters is
 * passed to a MACRO.
 */
#define __ZZ_CIB_CLASS_NAME(...) __VA_ARGS__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS
 * Defines common elements all proxy classes should have.
 */
#define __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(className, fullName)                                                     \
public:                                                                                                                \
  using __zz_cib_AbiType = class __zz_cib_Impl*;                                                                       \
                                                                                                                       \
private:                                                                                                               \
  friend struct __zz_cib_::__zz_cib_Helper<fullName>;                                                                  \
  friend struct __zz_cib_::__zz_cib_Delegator<fullName>;                                                               \
  using __zz_cib_MyHelper = __zz_cib_::__zz_cib_Helper<fullName>;                                                      \
  __zz_cib_AbiType __zz_cib_h_;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_PROXY_CLASS_INTERNALS
 * Allows cib to add it's hook in proxy classes in a minimally invasive way.
 */
#define __ZZ_CIB_PROXY_CLASS_INTERNALS(className, fullName)                                                            \
  __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(className, fullName)                                                           \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_TEMPLATE_CLASS_INTERNALS
 * Allows cib to add it's hook in proxy template specialization classes in a minimally invasive way.
 */
#define __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(className, fullName)                                                         \
  __ZZ_CIB_PROXY_CLASS_COMMON_INTERNALS(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))                 \
protected:                                                                                                             \
  /** This constructor is for cib generated code, please don't try to use it directly.*/                               \
  explicit className(__zz_cib_AbiType h)                                                                               \
    : __zz_cib_h_(h)                                                                                                   \
  {                                                                                                                    \
    __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);                                                           \
  }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS
 * Allows cib to add it's hook in classes that share layout with library in a minimally invasive way.
 */
#define __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS(className, fullName)                                                   \
public:                                                                                                                \
  using __zz_cib_AbiType = className*;                                                                                 \
                                                                                                                       \
private:                                                                                                               \
  using __zz_cib_MyHelper = __zz_cib_::__zz_cib_Helper<fullName>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @def __ZZ_CIB_FACADE_CLASS_INTERNALS
 * Allows cib to add it's hook in classes that act as facade for classes in a minimally invasive way.
 */
#define __ZZ_CIB_FACADE_CLASS_INTERNALS(className, fullName)                                                           \
  friend class __zz_cib_::__zz_cib_Generic<fullName>;                                                                  \
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(className), __ZZ_CIB_CLASS_NAME(fullName))
