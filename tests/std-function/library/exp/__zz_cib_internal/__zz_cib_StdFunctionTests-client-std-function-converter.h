/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_StdFunctionTests-client-default-type-converter.h"
#include "__zz_cib_StdFunctionTests-decl.h"

#include "__zz_cib_StdFunctionTests-std-function-converter-base.h"

namespace __zz_cib_ {

template <typename R, typename... Args>
struct __zz_cib_ClientTypeToAbiType<std::function<R(Args...)>> : __zz_cib_StdFuncToAbiType<R, Args...>
{
  using __zz_cib_StdFuncToAbiType<R, Args...>::__zz_cib_StdFuncToAbiType;
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
struct __zz_cib_AbiTypeToClientType<std::function<R(Args...)>> : __zz_cib_AbiTypeToStdFunc<R, Args...>
{
  using __zz_cib_AbiTypeToStdFunc<R, Args...>::__zz_cib_AbiTypeToStdFunc;
};

} // namespace __zz_cib_
