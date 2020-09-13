#include "example.h"
#include <list>
#include <vector>

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::C>> __zz_cib_decl g_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>>(
      __zz_cib_obj->::A::g()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>> __zz_cib_decl getLargeVector_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>>(
      __zz_cib_obj->::A::getLargeVector()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>> __zz_cib_decl getObjPtrVec_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>>(
      __zz_cib_obj->::A::getObjPtrVec()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl sumInLargeVector_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::sumInLargeVector()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl i_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::A::i()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator> __zz_cib_decl r_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::reverse_iterator>(
      __zz_cib_obj->::A::r()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>> __zz_cib_decl l_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>>(
      __zz_cib_obj->::A::l()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>> __zz_cib_decl vl_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>>(
      __zz_cib_obj->::A::vl()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class284 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::g_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getLargeVector_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getObjPtrVec_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::sumInLargeVector_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::i_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::r_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::l_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::vl_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}
