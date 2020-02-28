#include "template.h"


TemplateTest::TemplateTest(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

TemplateTest::TemplateTest(TemplateTest&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

TemplateTest::TemplateTest(::TemplateTest const & __zz_cib_param0)
  : TemplateTest(__zz_cib_Helper::__zz_cib_copy(__zz_cib_::TemplateTest::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

TemplateTest::~TemplateTest() {
  auto h = __zz_cib_::TemplateTest::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_Helper::__zz_cib_delete(h);
}

TemplateTest::TemplateTest()
  : TemplateTest(__zz_cib_Helper::__zz_cib_new())
{}

::TemplateClassWithOneParam<int> TemplateTest::getTemplateClassWithOneParam() const {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_Helper::getTemplateClassWithOneParam(__zz_cib_h_)
);
}

::TemplateClassWithTwoParams<int, float> TemplateTest::getTemplateClassWithTwoParams() const {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_Helper::getTemplateClassWithTwoParams(__zz_cib_h_)
);
}

::TemplateClassWithTwoParamsAndDefaultParameter<int, int> TemplateTest::getTemplateClassWithTwoParamsAndDefaultParameter() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_Helper::getTemplateClassWithTwoParamsAndDefaultParameter(__zz_cib_h_)
);
}

