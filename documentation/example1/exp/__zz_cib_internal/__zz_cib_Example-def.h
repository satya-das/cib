#pragma once

#include "__zz_cib_Example-class-internal-def.h"
#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-helper.h"
#include "__zz_cib_Example-import.h"

namespace __zz_cib_ {

//! Objects of classes defined by library travels to client as handles.
//! Only object pointers travel across component boundary and objects of library
//! go to client as opaque pointer of __zz_cib_HANDLE.
class __zz_cib_HANDLE;

} // namespace __zz_cib_

extern "C" __zz_cib_import __zz_cib_::__zz_cib_MethodTable __zz_cib_Example_GetMethodTable(std::uint32_t classId);
