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

#include "__zz_cib_$Module$-handle.h"
#include "__zz_cib_$Module$-mtable-helper.h"
#include "__zz_cib_$Module$-ids.h"
#include "__zz_cib_$Module$-def.h"

namespace __zz_cib_ { namespace $Module$ {

template <typename _ProxyClass, typename _Helper>
class __zz_cib_remote_proxy_mgr
{
public:
  __zz_cib_remote_proxy_mgr(std::uint32_t clientId)
    : clientId_     (clientId)
  {}

public:
  _ProxyClass* findProxy(__zz_cib_HANDLE* h)
  {
    return _Helper::__zz_cib_find_proxy(h, clientId_);
  }
  void addProxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h)
  {
    _Helper::__zz_cib_register_proxy(h, clientId_, __zz_cib_obj, [](_ProxyClass* obj) { delete obj; });
  }
  void removeProxy(__zz_cib_HANDLE* h)
  {
    _Helper::__zz_cib_unregister_proxy(h, clientId_);
  }

private:
  const std::uint32_t clientId_;
};

}}
