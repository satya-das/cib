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
#include "__zz_cib_Example-mtable-helper.h"

#include <cstdint>

namespace __zz_cib_ {
namespace Example {

using __zz_cib_ClientId = std::uint32_t;

class __zz_cib_internal_proxy
{
public:
  static __zz_cib_ClientId __zz_cib_get_client_id()
  {
    using __zz_cib_get_next_client_id_proc   = __zz_cib_ClientId (*__zz_cib_decl)();
    static const __zz_cib_ClientId clientId = internal_mtable().invoke<__zz_cib_get_next_client_id_proc, 0>();
    return clientId;
  }

private:
  static const __zz_cib_MethodTableHelper& internal_mtable()
  {
    constexpr auto                           internalClassId = __zz_cib_::Example::__zz_cib_internal_class_id;
    static const __zz_cib_MethodTableHelper& mtable          = __zz_cib_Example_GetMethodTable(internalClassId);
    return mtable;
  }
};

} // namespace Example
} // namespace __zz_cib_