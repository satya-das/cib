/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

namespace __zz_cib_ {

template <typename R, typename... Args>
using __zz_cib_StdFunc = std::function<R(Args...)>;

template <typename R, typename... Args>
using __zz_cib_StdProc = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(void*, __zz_cib_AbiType_t<Args>...);

template <typename R, typename... Args>
struct __zz_cib_StdFuncAbiType
{
  __zz_cib_StdProc<R, Args...> proc;
  void*            data;
};

} // namespace __zz_cib_