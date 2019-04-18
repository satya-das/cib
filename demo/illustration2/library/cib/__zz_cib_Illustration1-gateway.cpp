#include "__zz_cib_Illustration1-decl.h"
#include "__zz_cib_Illustration1-export.h"
#include "__zz_cib_Illustration1-ids.h"
#include "__zz_cib_Illustration1-mtable.h"

namespace __zz_cib_ { namespace A { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Illustration1_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::A::__zz_cib_classid:
    return __zz_cib_::A::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
