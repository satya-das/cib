#include "example.h"
#include <vector>

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
using namespace ::std;
namespace __zz_cib_Class256 {
using namespace ::std;
namespace __zz_cib_Class257 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::std::vector<::C>;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::std::vector<::C>* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::std::vector<::C>* __zz_cib_decl __zz_cib_new_1(::std::vector<::C>::size_type __n, ::C const * __value) {
  return new __zz_cib_Delegatee(__n, *__value);
}
static ::std::vector<::C>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static ::std::vector<::C>* __zz_cib_decl __zz_cib_new_3(::std::vector<::C>* __x) {
  return new __zz_cib_Delegatee(std::move(*__x));
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::std::vector<::C>* __zz_cib_decl __zz_cib_OperatorEqual(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C> const * __x) {
  return &__zz_cib_obj->::std::vector<::C>::operator=(*__x);
}
static ::std::vector<::C>* __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>* __x) {
  return &__zz_cib_obj->::std::vector<::C>::operator=(std::move(*__x));
}
static void __zz_cib_decl assign(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n, ::C const * __val) {
  __zz_cib_obj->::std::vector<::C>::assign(__n, *__val);
}
static ::std::vector<::C>::size_type __zz_cib_decl size(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::std::vector<::C>::size();
}
static ::std::vector<::C>::size_type __zz_cib_decl max_size(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::std::vector<::C>::max_size();
}
static void __zz_cib_decl resize(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __new_size, ::C const * __x) {
  __zz_cib_obj->::std::vector<::C>::resize(__new_size, *__x);
}
static void __zz_cib_decl shrink_to_fit(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::std::vector<::C>::shrink_to_fit();
}
static ::std::vector<::C>::size_type __zz_cib_decl capacity(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::std::vector<::C>::capacity();
}
static bool __zz_cib_decl empty(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::std::vector<::C>::empty();
}
static void __zz_cib_decl reserve(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
  __zz_cib_obj->::std::vector<::C>::reserve(__n);
}
static ::C* __zz_cib_decl __zz_cib_OperatorIndex(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
  return &__zz_cib_obj->::std::vector<::C>::operator[](__n);
}
static ::C const * __zz_cib_decl __zz_cib_OperatorIndex_16(const __zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
  return &__zz_cib_obj->::std::vector<::C>::operator[](__n);
}
static ::C* __zz_cib_decl at(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
  return &__zz_cib_obj->::std::vector<::C>::at(__n);
}
static ::C const * __zz_cib_decl at_18(const __zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
  return &__zz_cib_obj->::std::vector<::C>::at(__n);
}
static ::C* __zz_cib_decl front(__zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::std::vector<::C>::front();
}
static ::C const * __zz_cib_decl front_20(const __zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::std::vector<::C>::front();
}
static ::C* __zz_cib_decl back(__zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::std::vector<::C>::back();
}
static ::C const * __zz_cib_decl back_22(const __zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::std::vector<::C>::back();
}
static void __zz_cib_decl push_back(__zz_cib_Delegatee* __zz_cib_obj, ::C const * __x) {
  __zz_cib_obj->::std::vector<::C>::push_back(*__x);
}
static void __zz_cib_decl push_back_24(__zz_cib_Delegatee* __zz_cib_obj, ::C* __x) {
  __zz_cib_obj->::std::vector<::C>::push_back(std::move(*__x));
}
static void __zz_cib_decl pop_back(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::std::vector<::C>::pop_back();
}
static void __zz_cib_decl swap(__zz_cib_Delegatee* __zz_cib_obj, ::std::vector<::C>* __x) {
  __zz_cib_obj->::std::vector<::C>::swap(*__x);
}
static void __zz_cib_decl clear(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::std::vector<::C>::clear();
}
}
}}}

namespace __zz_cib_ {
using namespace ::std;
namespace __zz_cib_Class256 {
using namespace ::std;
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorEqual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::assign),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::size),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::max_size),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::resize),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::shrink_to_fit),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::capacity),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::empty),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::reserve),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorIndex),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorIndex_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::at),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::at_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::front),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::front_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::back),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::back_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::push_back),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::push_back_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::pop_back),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::swap),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::clear)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 28 };
  return &methodTable;
}
}}}
