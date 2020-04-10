/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-client-default-type-converter.h"
#include "__zz_cib_templates-client-function-type-converter.h"
#include "__zz_cib_templates-client-proxy-type-converter.h"
#include "__zz_cib_templates-client-smart-ptr-converter.h"
#include "__zz_cib_templates-client-std-function-converter.h"

namespace __zz_cib_ {

template <typename _ValueType, typename = void>
struct return_value
{
  using type = _ValueType;
};
template <typename _ValueType>
struct return_value<_ValueType, std::enable_if_t<std::is_class_v<_ValueType>, void>>
{
  using type = _ValueType&;
};

template <typename _ValueType>
using return_value_t = typename return_value<_ValueType>::type;

} // namespace __zz_cib_
