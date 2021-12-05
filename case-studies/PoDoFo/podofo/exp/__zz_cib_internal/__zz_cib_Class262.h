#pragma once


#include "podofo/base/PdfObject.h"
#include "__zz_cib_internal/__zz_cib_Class257.h"
#include "__zz_cib_internal/__zz_cib_Class258.h"
#include "__zz_cib_internal/__zz_cib_Class259.h"
#include "__zz_cib_internal/__zz_cib_Class260.h"
#include <vector>

namespace __zz_cib_ {
using namespace ::std;
template <typename T>
struct __zz_cib_Helper<::std::vector<::PoDoFo::PdfObject>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::std::vector<::PoDoFo::PdfObject>>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::std::vector<::PoDoFo::PdfObject>;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class262::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class262::__zz_cib_classId))
  {}
  ~__zz_cib_Helper() {
    instanceDeleted_ = true;
  }
  static __zz_cib_Helper& __zz_cib_Instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
    return __zz_cib_Instance();
  }

  static __zz_cib_AbiType __zz_cib_New_0() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_0>(
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_Copy_3(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_3>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_4(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_4>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_5(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_5>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorEqual_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorEqual_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto assign_8(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::assign_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto begin_9(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::begin_9>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto begin_10(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::begin_10>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_11(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::end_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_12(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::end_12>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_13(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::rbegin_13>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_14(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::rbegin_14>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_15(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::rend_15>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_16(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::rend_16>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cbegin_17(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::cbegin_17>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cend_18(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::cend_18>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crbegin_19(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::crbegin_19>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crend_20(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::crend_20>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto empty_21(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::empty_21>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto size_22(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::size_22>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto max_size_23(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::max_size_23>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto capacity_24(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::capacity_24>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto resize_25(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::resize_25>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto resize_26(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::resize_26>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto reserve_27(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::reserve_27>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto shrink_to_fit_28(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::shrink_to_fit_28>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_29(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorIndex_29>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_30(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorIndex_30>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_31(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::at_31>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_32(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::at_32>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto front_33(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::front_33>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto front_34(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::front_34>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_35(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::back_35>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_36(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::back_36>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto data_37(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::data_37>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto data_38(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::data_38>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_39(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::push_back_39>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_40(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::push_back_40>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_back_41(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::pop_back_41>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto insert_42(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::insert_42>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_43(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::insert_43>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto insert_44(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::insert_44>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_45(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::erase_45>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto erase_46(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::erase_46>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto swap_47(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::swap_47>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto clear_48(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::clear_48>(
      __zz_cib_obj
      );
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h) {
    auto* const __zz_cib_obj = new T(h);
    return __zz_cib_obj;
  }
  static T __zz_cib_ObjectFromHandle(__zz_cib_AbiType h) {
    return T(h);
  }
  static __zz_cib_AbiType& __zz_cib_GetHandle(T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_GetHandle(const T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_ReleaseHandle(T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_RemoveProxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    if (h == nullptr)
      return nullptr;
    auto&  dis   = __zz_cib_Instance();
    auto* proxy = dis.implProxyMap_.FindProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_CreateProxy(h);
    return proxy;
  }
  static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_Instance();
    dis.implProxyMap_.AddProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {
    if (instanceDeleted_) return;
    auto& dis = __zz_cib_Instance();
      dis.implProxyMap_.RemoveProxy(h);
  }
};
template <typename T>
bool __zz_cib_Helper<::std::vector<::PoDoFo::PdfObject>, T>::instanceDeleted_ = false;
}
namespace std {
template<>
class vector<::PoDoFo::PdfObject>
{
public:
  using value_type = ::PoDoFo::PdfObject;
  using pointer = ::PoDoFo::PdfObject*;
  using iterator = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>;
  using const_iterator = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject const >;
  using reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>;
  using const_reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >;
  using reference = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference;
  using const_reference = __zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference;
  using size_type = size_t;
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  vector()
    : std::vector<::PoDoFo::PdfObject>(__zz_cib_MyHelper::__zz_cib_New_0())
  {}
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  vector(::std::vector<::PoDoFo::PdfObject>::size_type n)
    : std::vector<::PoDoFo::PdfObject>(__zz_cib_MyHelper::__zz_cib_New_1(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))))
  {}
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  vector(::std::vector<::PoDoFo::PdfObject>::size_type n, const ::PoDoFo::PdfObject& value)
    : std::vector<::PoDoFo::PdfObject>(__zz_cib_MyHelper::__zz_cib_New_2(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n)),
      __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(value)>(value)))
  {}
  vector(const ::std::vector<::PoDoFo::PdfObject>& x)
    : std::vector<::PoDoFo::PdfObject>(__zz_cib_MyHelper::__zz_cib_Copy_3(
            __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
  {}
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  vector(::std::vector<::PoDoFo::PdfObject>&& __zz_cib_param0)
    : std::vector<::PoDoFo::PdfObject>(__zz_cib_MyHelper::__zz_cib_New_4(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))))
  {}
  ~vector() {
    auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
    __zz_cib_MyHelper::__zz_cib_Delete_5(
      h
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>& operator=(const ::std::vector<::PoDoFo::PdfObject>& x) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(x)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>& operator=(::std::vector<::PoDoFo::PdfObject>&& x) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_7<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(std::move(x))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void assign(::std::vector<::PoDoFo::PdfObject>::size_type n, const ::PoDoFo::PdfObject& u) {
      __zz_cib_MyHelper::assign_8<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(u)>(u)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator begin() {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::begin_9<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_iterator begin() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_MyHelper::begin_10<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator end() {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::end_11<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_iterator end() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_MyHelper::end_12<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::reverse_iterator rbegin() {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_MyHelper::rbegin_13<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator rbegin() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_MyHelper::rbegin_14<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::reverse_iterator rend() {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_MyHelper::rend_15<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator rend() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_MyHelper::rend_16<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_iterator cbegin() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_MyHelper::cbegin_17<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_iterator cend() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_MyHelper::cend_18<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator crbegin() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_MyHelper::crbegin_19<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator crend() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_MyHelper::crend_20<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  bool empty() const {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::empty_21<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::size_type size() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_MyHelper::size_22<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::size_type max_size() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_MyHelper::max_size_23<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::size_type capacity() const {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_MyHelper::capacity_24<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void resize(::std::vector<::PoDoFo::PdfObject>::size_type sz) {
      __zz_cib_MyHelper::resize_25<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(sz)>(std::move(sz))
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void resize(::std::vector<::PoDoFo::PdfObject>::size_type sz, const ::PoDoFo::PdfObject& c) {
      __zz_cib_MyHelper::resize_26<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(sz)>(std::move(sz)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(c)>(c)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void reserve(::std::vector<::PoDoFo::PdfObject>::size_type n) {
      __zz_cib_MyHelper::reserve_27<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void shrink_to_fit() {
      __zz_cib_MyHelper::shrink_to_fit_28<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference operator[](::std::vector<::PoDoFo::PdfObject>::size_type n) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_29<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference operator[](::std::vector<::PoDoFo::PdfObject>::size_type n) const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_30<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference at(::std::vector<::PoDoFo::PdfObject>::size_type n) const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_MyHelper::at_31<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference at(::std::vector<::PoDoFo::PdfObject>::size_type n) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_MyHelper::at_32<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference front() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_MyHelper::front_33<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference front() const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_MyHelper::front_34<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference back() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_MyHelper::back_35<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference back() const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_MyHelper::back_36<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::PoDoFo::PdfObject* data() {
    return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_MyHelper::data_37<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::PoDoFo::PdfObject*>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  const ::PoDoFo::PdfObject* data() const {
    return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_MyHelper::data_38<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, const ::PoDoFo::PdfObject*>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void push_back(const ::PoDoFo::PdfObject& x) {
      __zz_cib_MyHelper::push_back_39<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(x)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void push_back(::PoDoFo::PdfObject&& x) {
      __zz_cib_MyHelper::push_back_40<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(std::move(x))
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void pop_back() {
      __zz_cib_MyHelper::pop_back_41<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator insert(::std::vector<::PoDoFo::PdfObject>::const_iterator position, const ::PoDoFo::PdfObject& x) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::insert_42<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(x)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator insert(::std::vector<::PoDoFo::PdfObject>::const_iterator position, ::PoDoFo::PdfObject&& x) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::insert_43<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(std::move(x))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator insert(::std::vector<::PoDoFo::PdfObject>::const_iterator position, ::std::vector<::PoDoFo::PdfObject>::size_type n, const ::PoDoFo::PdfObject& x) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::insert_44<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(position)>(std::move(position)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(x)>(x)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator erase(::std::vector<::PoDoFo::PdfObject>::const_iterator position) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::erase_45<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(position)>(std::move(position))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  ::std::vector<::PoDoFo::PdfObject>::iterator erase(::std::vector<::PoDoFo::PdfObject>::const_iterator first, ::std::vector<::PoDoFo::PdfObject>::const_iterator last) {
    return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_MyHelper::erase_46<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::std::vector<::PoDoFo::PdfObject>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(first)>(std::move(first)),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(last)>(std::move(last))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void swap(::std::vector<::PoDoFo::PdfObject>& __zz_cib_param0) {
      __zz_cib_MyHelper::swap_47<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(__zz_cib_param0)>(__zz_cib_param0)
      );
    }
  template <typename __zz_cib_Dummy = std::pair<vector<::PoDoFo::PdfObject>*, vector<::PoDoFo::PdfObject>*>>
  void clear() {
      __zz_cib_MyHelper::clear_48<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, void>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      );
    }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(vector<::PoDoFo::PdfObject>), __ZZ_CIB_CLASS_NAME(std::vector<::PoDoFo::PdfObject>));
};
}
