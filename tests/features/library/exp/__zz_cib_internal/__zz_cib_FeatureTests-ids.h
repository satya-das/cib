#pragma once

namespace __zz_cib_ { namespace __zz_cib_Class256 {
  //#= FullClassName: ::TemplateClassWithOneParam<int>
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace TemplateTest {
  //#= FullClassName: ::TemplateTest
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace FeatureTests {
  enum { __zz_cib_next_class_id = 258 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_Class256 { namespace __zz_cib_methodid {
  enum {
    //#= TemplateClassWithOneParam(::TemplateClassWithOneParam<int> const &);
    __zz_cib_copy = 0,
    //#= ~TemplateClassWithOneParam();
    __zz_cib_delete = 1,
    //#= TemplateClassWithOneParam(int);
    __zz_cib_new = 2,
    //#= int get() const;
    get = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace TemplateTest { namespace __zz_cib_methodid {
  enum {
    //#= TemplateTest(::TemplateTest const &);
    __zz_cib_copy = 0,
    //#= ~TemplateTest();
    __zz_cib_delete = 1,
    //#= TemplateTest();
    __zz_cib_new = 2,
    //#= ::TemplateClassWithOneParam<int> getTemplateClassWithOneParam() const;
    getTemplateClassWithOneParam = 3,
    __zz_cib_next_method_id = 4
  };
}}}

