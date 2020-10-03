/*
    This file is for helping cib handle smart pointers.

    Please provide definitions of __zz_cib_get(), __zz_cib_release(), and __zz_cib_attach().
*/

#pragma once

#include <memory>

namespace __zz_cib_ {

template <typename T>
auto* __zz_cib_get(const std::unique_ptr<T>& p)
{
  return p.get();
}

template <typename T>
auto* __zz_cib_release(std::unique_ptr<T>& p)
{
  return p.release();
}

template <typename _SmartPtrT, typename T>
_SmartPtrT __zz_cib_attach(T* rawPtr)
{
  return _SmartPtrT(rawPtr);
}

template <typename T>
using __zz_cib_SmartPtrUnderlyingType_t = decltype(__zz_cib_get(T()));

} // namespace __zz_cib_
