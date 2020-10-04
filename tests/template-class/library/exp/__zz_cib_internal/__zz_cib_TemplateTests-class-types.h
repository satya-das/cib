/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_TemplateTests-smart-ptr-detection.h"
#include "__zz_cib_TemplateTests-type-traits.h"

#include <functional>
#include <type_traits>

namespace __zz_cib_ {

///! If the class is a proxy class of another class of other library.
template <typename T, typename = void>
struct __zz_cib_IsProxyClass : std::false_type
{
};

///! If the class is used via a proxy class in another library.
template <typename T, typename = void>
struct __zz_cib_IsProxiedClass : std::false_type
{
};

template <typename T, typename = void>
struct __zz_cib_UsesMethodTable : std::false_type
{
};

template <typename T>
struct __zz_cib_UsesMethodTable<T, std::void_t<typename T::__zz_cib_AbiType>> : std::true_type
{
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T, typename = void>
struct __zz_cib_SharesLayout : std::false_type
{
};

template <typename T>
struct __zz_cib_SharesLayout<
  T,
  std::enable_if_t<std::is_same_v<std::decay_t<T*>, typename std::decay_t<T>::__zz_cib_AbiType>, void>> : std::true_type
{
};

template <typename T>
struct __zz_cib_SharesLayout<
  const T,
  std::enable_if_t<std::is_same_v<std::decay_t<T*>, typename std::decay_t<T>::__zz_cib_AbiType>, void>> : std::true_type
{
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T, typename = void>
struct __zz_cib_IsValueClass : std::false_type
{
};

template <typename T>
struct __zz_cib_IsValueClass<T> : __zz_cib_SharesLayout<T>
{
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T, typename = void>
struct __zz_cib_IsStdFunction : std::false_type
{
};

template <typename R, typename... Args>
struct __zz_cib_IsStdFunction<std::function<R(Args...)>> : std::true_type
{
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
constexpr bool __zz_cib_UsesMethodTable_v = __zz_cib_UsesMethodTable<T>::value;

template <typename T>
constexpr bool __zz_cib_SharesLayout_v = __zz_cib_SharesLayout<T>::value;

template <typename T>
constexpr bool __zz_cib_IsStdFunction_v = __zz_cib_IsStdFunction<T>::value;

template <typename T>
constexpr bool __zz_cib_IsPlainClass_v =
  (std::is_class_v<T> && !__zz_cib_IsSmartPtr_v<T> && !__zz_cib_IsStdFunction_v<T>);

template <typename T>
constexpr bool __zz_cib_IsConstructibleClass_v = (__zz_cib_IsPlainClass_v<T> && !std::is_abstract_v<T>);

template <typename T>
constexpr bool __zz_cib_IsProxyClass_v = __zz_cib_IsProxyClass<T>::value;

template <typename T>
constexpr bool __zz_cib_IsProxiedClass_v = __zz_cib_IsProxiedClass<T>::value;

template <typename T>
constexpr bool __zz_cib_IsProxiedType_v = __zz_cib_IsProxiedClass<__zz_cib_RemoveAllDecorations_t<T>>::value;

template <typename T>
constexpr bool __zz_cib_IsConstructibleProxy_v = (__zz_cib_IsProxyClass_v<T> && !std::is_abstract_v<T>);

template <typename T>
constexpr bool __zz_cib_IsValueClass_v = __zz_cib_IsValueClass<T>::value;

template <typename T>
constexpr bool __zz_cib_IsFunctionPointer_v = std::is_pointer_v<T>&& std::is_function_v<std::remove_pointer_t<T>>;

//! As of now treat all non-proxy class as proxied. It leaves out support of passing third party classes by value.
template <typename T>
struct __zz_cib_IsProxiedClass<T,
                               std::enable_if_t<__zz_cib_IsPlainClass_v<T> && !__zz_cib_IsProxyClass<T>::value, void>>
{
  static constexpr bool value = true;
};

} // namespace __zz_cib_

#if __has_include("__zz_cib_TemplateTests-value-types.h")
#  include "__zz_cib_TemplateTests-value-types.h"
#endif
