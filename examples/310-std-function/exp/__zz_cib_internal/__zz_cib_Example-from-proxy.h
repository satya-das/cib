/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#pragma once

#include <type_traits>

namespace __zz_cib_ {

template <typename _T, typename = int>
struct is_proxy_class : std::false_type
{
};

template <typename _T>
struct is_proxy_class<_T, decltype((void) _T::__zz_cib_is_proxy, 0)> : std::true_type
{
};

struct __zz_cib_ProxyHelper
{
  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T& nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T* nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T** nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T& nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T* nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<!is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T** nonProxyObj)
  {
    return nonProxyObj;
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T& proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T* proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(_T** proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T& proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T* proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }

  template <typename _T, std::enable_if_t<is_proxy_class<_T>::value, _T>* = nullptr>
  static auto __zz_cib_handle(const _T** proxyObj)
  {
    return _T::__zz_cib_Helper::__zz_cib_handle(proxyObj);
  }
};

template <typename _T>
static auto __zz_cib_handle(_T& obj)
{
  return __zz_cib_ProxyHelper::__zz_cib_handle(obj);
}

template <typename _T>
static auto __zz_cib_handle(const _T& obj)
{
  return __zz_cib_ProxyHelper::__zz_cib_handle(obj);
}

template <typename _T>
static auto __zz_cib_handle(_T* obj)
{
  return __zz_cib_ProxyHelper::__zz_cib_handle(obj);
}

template <typename _T>
static auto __zz_cib_handle(const _T* obj)
{
  return __zz_cib_ProxyHelper::__zz_cib_handle(obj);
}

} // namespace __zz_cib_
