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

#include "__zz_cib_Example-def.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-internal-proxy.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {

using __zz_cib_ClientId = std::uint32_t;

namespace Example {

using __zz_cib_ClientId = std::uint32_t;

template <typename _ProxyClass, typename _Helper>
class __zz_cib_RemoteProxyManager
{
public:
  __zz_cib_RemoteProxyManager()
    /*/ TODO: Remove this comment
    : clientId_(__zz_cib_InternalProxy::__zz_cib_GetClientId())
    /*/
    : clientId_(0)
  //*/
  {
  }

public:
  _ProxyClass* FindProxy(typename _ProxyClass::__zz_cib_AbiType h)
  {
    return _Helper::__zz_cib_FindProxy(h, clientId_);
  }
  void AddProxy(_ProxyClass* __zz_cib_obj, typename _ProxyClass::__zz_cib_AbiType h)
  {
    _Helper::__zz_cib_RegisterProxy(
      h, clientId_, __zz_cib_obj, [](_ProxyClass* obj) { _Helper::__zz_cib_DeleteOnlyProxy(obj); });
  }
  void RemoveProxy(typename _ProxyClass::__zz_cib_AbiType h)
  {
    _Helper::__zz_cib_UnregisterProxy(h, clientId_);
  }

private:
  const std::uint32_t clientId_;
};

} // namespace Example
} // namespace __zz_cib_
