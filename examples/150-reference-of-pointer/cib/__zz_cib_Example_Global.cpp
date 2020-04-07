#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "example.h"

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
namespace __zz_cib_NsDelegator {
static __zz_cib_RValueAbiType_t<int> __zz_cib_decl GetNewA_0(__zz_cib_AbiType_t<::A*&> pA) {
  return __zz_cib_ToRValueAbiType<int>(
    ::GetNewA(
      __zz_cib_::__zz_cib_FromAbiType<::A*&>(pA)
    )
  );
}
static __zz_cib_RValueAbiType_t<int> __zz_cib_decl GetNewB_1(__zz_cib_AbiType_t<::A*&> pA) {
  return __zz_cib_ToRValueAbiType<int>(
    ::GetNewB(
      __zz_cib_::__zz_cib_FromAbiType<::A*&>(pA)
    )
  );
}
static __zz_cib_RValueAbiType_t<int> __zz_cib_decl GetNewA_2(__zz_cib_AbiType_t<const ::A*&> pA) {
  return __zz_cib_ToRValueAbiType<int>(
    ::GetNewA(
      __zz_cib_::__zz_cib_FromAbiType<const ::A*&>(pA)
    )
  );
}
static __zz_cib_RValueAbiType_t<int> __zz_cib_decl GetNewB_3(__zz_cib_AbiType_t<const ::A*&> pA) {
  return __zz_cib_ToRValueAbiType<int>(
    ::GetNewB(
      __zz_cib_::__zz_cib_FromAbiType<const ::A*&>(pA)
    )
  );
}
}}}

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GetNewA_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GetNewB_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GetNewA_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GetNewB_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
