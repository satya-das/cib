#include "template.h"


TemplateTest::TemplateTest(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

TemplateTest::TemplateTest(TemplateTest&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

TemplateTest::TemplateTest(const TemplateTest& __zz_cib_param0)
  : TemplateTest(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const TemplateTest&>(__zz_cib_param0)))
  {}

TemplateTest::~TemplateTest() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

TemplateTest::TemplateTest()
  : TemplateTest(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

::TemplateClassWithOneParam<int> TemplateTest::getTemplateClassWithOneParam() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::TemplateClassWithOneParam<int>>(
    __zz_cib_MyHelper::getTemplateClassWithOneParam<__zz_cib_::__zz_cib_RValueAbiType_t<::TemplateClassWithOneParam<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::TemplateClassWithTwoParams<int, float> TemplateTest::getTemplateClassWithTwoParams() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::TemplateClassWithTwoParams<int, float>>(
    __zz_cib_MyHelper::getTemplateClassWithTwoParams<__zz_cib_::__zz_cib_RValueAbiType_t<::TemplateClassWithTwoParams<int, float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::TemplateClassWithTwoParamsAndDefaultParameter<int, int> TemplateTest::getTemplateClassWithTwoParamsAndDefaultParameter() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>(
    __zz_cib_MyHelper::getTemplateClassWithTwoParamsAndDefaultParameter<__zz_cib_::__zz_cib_RValueAbiType_t<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

