#pragma once

#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-export.h"
#include "__zz_cib_Graphics-mtable.h"

namespace __zz_cib_ {

//! Objects of classes defined by client travels to library as proxies.
//! Only object pointers travel across component boundary and client
//! side objects go to library side as opaque pointer of __zz_cib_PROXY.
class __zz_cib_PROXY;

} // namespace __zz_cib_
