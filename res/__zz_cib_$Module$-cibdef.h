#pragma once

#include "__zz_cib_$Module$-helper.h"
#include "__zz_cib_decl.h"
#include "__zz_cib_import.h"

namespace __zz_cib_ {

//! Objects of classes defined by library travels to client as handles.
//! Only object pointers travel across component boundary and library
//! side objects go to client side as opaque pointer of __zz_cib_HANDLE.
class __zz_cib_HANDLE;

} // namespace __zz_cib_

extern "C" __zz_cib_import __zz_cib_::__zz_cib_MethodTable __zz_cib_$Module$_GetMethodTable(std::uint32_t classId);

#define __ZZ_CIB_CLASS_INTERNAL_DEF(className, fullName)                                                               \
protected:                                                                                                             \
  className(__zz_cib_::__zz_cib_HANDLE* h);                                                                            \
                                                                                                                       \
private:                                                                                                               \
  friend class __zz_cib_::fullName::__zz_cib_Helper;                                                                   \
  __zz_cib_::__zz_cib_HANDLE* __zz_cib_h_
