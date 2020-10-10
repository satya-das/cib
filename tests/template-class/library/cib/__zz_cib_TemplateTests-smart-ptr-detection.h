/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_TemplateTests-smart-ptr-input.h"

#include <type_traits>

namespace __zz_cib_ {

template <typename T, typename = void>
struct __zz_cib_IsSmartPtr : std::false_type
{
};

template <typename T>
struct __zz_cib_IsSmartPtr<T, std::void_t<decltype(__zz_cib_GetRawPtr(*((T*) nullptr)))>> : std::true_type
{
};

template <typename T>
constexpr bool __zz_cib_IsSmartPtr_v = __zz_cib_IsSmartPtr<T>::value;

} // namespace __zz_cib_