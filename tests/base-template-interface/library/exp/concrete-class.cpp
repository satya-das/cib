#include "concrete-class.h"


StillAnAbstractClass::StillAnAbstractClass(__zz_cib_AbiType h)
  : ::ClassWithParameterizedBase<::BaseInterface>(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class256(h))
  , __zz_cib_h_(h)
{}

StillAnAbstractClass::StillAnAbstractClass(StillAnAbstractClass&& rhs)
  : ::ClassWithParameterizedBase<::BaseInterface>(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

int StillAnAbstractClass::ImplF() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::ImplF_0<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


DerivedClass::DerivedClass(__zz_cib_AbiType h)
  : ::StillAnAbstractClass(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class259(h))
  , __zz_cib_h_(h)
{}

DerivedClass::DerivedClass(DerivedClass&& rhs)
  : ::StillAnAbstractClass(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

DerivedClass::DerivedClass(const ::DerivedClass& __zz_cib_param0)
  : DerivedClass(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

DerivedClass::~DerivedClass() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

DerivedClass::DerivedClass()
  : DerivedClass(__zz_cib_MyHelper::__zz_cib_New_2())
{}

int DerivedClass::F() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::F_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

