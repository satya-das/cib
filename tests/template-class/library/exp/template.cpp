#include "template.h"


TemplateTest::TemplateTest(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

TemplateTest::TemplateTest(TemplateTest&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

TemplateTest::TemplateTest(const ::TemplateTest& __zz_cib_param0)
  : TemplateTest(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

TemplateTest::~TemplateTest() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

TemplateTest::TemplateTest()
  : TemplateTest(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

::TemplateClassWithOneParam<int> TemplateTest::getTemplateClassWithOneParam() const {
  return __zz_cib_::__zz_cib_FromAbiType<::TemplateClassWithOneParam<int>>(
    __zz_cib_MyHelper::getTemplateClassWithOneParam_3<__zz_cib_::__zz_cib_AbiType_t<::TemplateClassWithOneParam<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::TemplateClassWithTwoParams<int, float> TemplateTest::getTemplateClassWithTwoParams() const {
  return __zz_cib_::__zz_cib_FromAbiType<::TemplateClassWithTwoParams<int, float>>(
    __zz_cib_MyHelper::getTemplateClassWithTwoParams_4<__zz_cib_::__zz_cib_AbiType_t<::TemplateClassWithTwoParams<int, float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::TemplateClassWithTwoParamsAndDefaultParameter<int, int> TemplateTest::getTemplateClassWithTwoParamsAndDefaultParameter() const {
  return __zz_cib_::__zz_cib_FromAbiType<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>(
    __zz_cib_MyHelper::getTemplateClassWithTwoParamsAndDefaultParameter_5<__zz_cib_::__zz_cib_AbiType_t<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

