#include "__zz_cib_illustration2-decl.h"
#include "__zz_cib_illustration2-export.h"
#include "__zz_cib_illustration2-ids.h"
#include "__zz_cib_illustration2-mtable.h"

namespace __zz_cib_ { namespace C { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace I { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_illustration2_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::C::__zz_cib_classid:
    return __zz_cib_::C::__zz_cib_GetMethodTable();
  case __zz_cib_::I::__zz_cib_classid:
    return __zz_cib_::I::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
