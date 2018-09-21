#pragma once

#include "__zz_cib_$Module$-decl.h"
#include "__zz_cib_$Module$-export.h"
#include "__zz_cib_$Module$-mtable.h"

namespace __zz_cib_ {

//! Objects of classes defined by client travels to library as proxies.
//! Only object pointers travel across component boundary and objects of client
//! go to library as opaque pointer of __zz_cib_PROXY.
class __zz_cib_PROXY;

} // namespace __zz_cib_
