#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include <vector>

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfArray::PdfArray(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOwnedDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class392(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfArray::PdfArray(PdfArray&& rhs)
  : ::PoDoFo::PdfOwnedDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfArray::PdfArray()
  : PoDoFo::PdfArray(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfArray::PdfArray(const ::PoDoFo::PdfObject& var)
  : PoDoFo::PdfArray(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var)))
{}

PoDoFo::PdfArray::PdfArray(const ::PoDoFo::PdfArray& rhs)
  : PoDoFo::PdfArray(__zz_cib_MyHelper::__zz_cib_Copy_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfArray::~PdfArray() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

::PoDoFo::PdfArray& PoDoFo::PdfArray::operator=(const ::PoDoFo::PdfArray& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

size_t PoDoFo::PdfArray::GetSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSize_5<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfArray::Clear() {
    __zz_cib_MyHelper::Clear_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfArray::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

bool PoDoFo::PdfArray::ContainsString(const std::string& cmpString) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::ContainsString_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cmpString)>(cmpString)
    )
  );
}

size_t PoDoFo::PdfArray::GetStringIndex(const std::string& cmpString) const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetStringIndex_9<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cmpString)>(cmpString)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfArray::FindAt(::PoDoFo::PdfArray::size_type idx) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindAt_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(idx)>(std::move(idx))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfArray::FindAt(::PoDoFo::PdfArray::size_type idx) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindAt_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(idx)>(std::move(idx))
    )
  );
}

void PoDoFo::PdfArray::push_back(const ::PoDoFo::PdfObject& var) {
    __zz_cib_MyHelper::push_back_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var)
    );
  }

void PoDoFo::PdfArray::clear() {
    __zz_cib_MyHelper::clear_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

size_t PoDoFo::PdfArray::size() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::size_14<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfArray::empty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::empty_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject& PoDoFo::PdfArray::operator[](::PoDoFo::PdfArray::size_type __n) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject&>(
    __zz_cib_MyHelper::__zz_cib_OperatorIndex_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    )
  );
}

const ::PoDoFo::PdfObject& PoDoFo::PdfArray::operator[](::PoDoFo::PdfArray::size_type __n) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(
    __zz_cib_MyHelper::__zz_cib_OperatorIndex_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    )
  );
}

void PoDoFo::PdfArray::resize(size_t count, ::PoDoFo::PdfObject val) {
    __zz_cib_MyHelper::resize_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(count)>(std::move(count)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(val)>(std::move(val))
    );
  }

::std::vector<::PoDoFo::PdfObject>::iterator PoDoFo::PdfArray::begin() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
    __zz_cib_MyHelper::begin_19<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::const_iterator PoDoFo::PdfArray::begin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
    __zz_cib_MyHelper::begin_20<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::iterator PoDoFo::PdfArray::end() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
    __zz_cib_MyHelper::end_21<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::const_iterator PoDoFo::PdfArray::end() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
    __zz_cib_MyHelper::end_22<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::reverse_iterator PoDoFo::PdfArray::rbegin() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
    __zz_cib_MyHelper::rbegin_23<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator PoDoFo::PdfArray::rbegin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
    __zz_cib_MyHelper::rbegin_24<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::reverse_iterator PoDoFo::PdfArray::rend() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
    __zz_cib_MyHelper::rend_25<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator PoDoFo::PdfArray::rend() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
    __zz_cib_MyHelper::rend_26<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200    // workaround template-error in Visualstudio 6
void PoDoFo::PdfArray::insert(::std::vector<::PoDoFo::PdfObject>::iterator __position, ::std::vector<::PoDoFo::PdfObject>::iterator __first, ::std::vector<::PoDoFo::PdfObject>::iterator __last) {
    __zz_cib_MyHelper::insert_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__position)>(std::move(__position)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__first)>(std::move(__first)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__last)>(std::move(__last))
    );
  }
#endif

::std::vector<::PoDoFo::PdfObject>::iterator PoDoFo::PdfArray::insert(const ::std::vector<::PoDoFo::PdfObject>::iterator& pos, const ::PoDoFo::PdfObject& val) {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
    __zz_cib_MyHelper::insert_28<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pos)>(pos),
      __zz_cib_::__zz_cib_ToAbiType<decltype(val)>(val)
    )
  );
}

void PoDoFo::PdfArray::erase(const ::std::vector<::PoDoFo::PdfObject>::iterator& pos) {
    __zz_cib_MyHelper::erase_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pos)>(pos)
    );
  }

void PoDoFo::PdfArray::erase(const ::std::vector<::PoDoFo::PdfObject>::iterator& first, const ::std::vector<::PoDoFo::PdfObject>::iterator& last) {
    __zz_cib_MyHelper::erase_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(first)>(first),
      __zz_cib_::__zz_cib_ToAbiType<decltype(last)>(last)
    );
  }

void PoDoFo::PdfArray::reserve(::PoDoFo::PdfArray::size_type __n) {
    __zz_cib_MyHelper::reserve_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    );
  }

::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference PoDoFo::PdfArray::front() {
  return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
    __zz_cib_MyHelper::front_32<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference PoDoFo::PdfArray::front() const {
  return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
    __zz_cib_MyHelper::front_33<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference PoDoFo::PdfArray::back() {
  return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
    __zz_cib_MyHelper::back_34<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference PoDoFo::PdfArray::back() const {
  return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
    __zz_cib_MyHelper::back_35<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfArray::operator==(const ::PoDoFo::PdfArray& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_36<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfArray::operator!=(const ::PoDoFo::PdfArray& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_37<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfArray::IsDirty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDirty_38<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfArray::SetDirty(bool bDirty) {
    __zz_cib_MyHelper::SetDirty_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }

void PoDoFo::PdfArray::SetOwner(::PoDoFo::PdfObject* pOwner) {
    __zz_cib_MyHelper::SetOwner_40<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfArray> : public ::PoDoFo::PdfArray {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class334::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class334::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfArray(h) {}
public:
  static ::PoDoFo::PdfArray* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetOwner(::PoDoFo::PdfObject* pOwner) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pOwner)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetOwner_40>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
  void SetDirty(bool bDirty) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bDirty)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetDirty_39>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(eWriteMode)>, __zz_cib_AbiType_t<decltype(pEncrypt)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }
  bool IsDirty() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDirty_38>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfArray>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_3>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfArray* __zz_cib_Helper<::PoDoFo::PdfArray>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class334::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfArray(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfArray>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
