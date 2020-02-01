#pragma once

namespace __zz_cib_ { namespace __zz_cib_Class256 {
  //#= FullClassName: ::TemplateClassWithOneParam<int>
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace __zz_cib_Class257 {
  //#= FullClassName: ::TemplateClassWithTwoParams<int, float>
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace __zz_cib_Class258 {
  //#= FullClassName: ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace TemplateTest {
  //#= FullClassName: ::TemplateTest
  enum { __zz_cib_classid = 259 };
}}

namespace __zz_cib_ { namespace FeatureTests {
  enum { __zz_cib_next_class_id = 260 };
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

namespace __zz_cib_ { namespace __zz_cib_Class257 { namespace __zz_cib_methodid {
  enum {
    //#= TemplateClassWithTwoParams(::TemplateClassWithTwoParams<int, float> const &);
    __zz_cib_copy = 0,
    //#= ~TemplateClassWithTwoParams();
    __zz_cib_delete = 1,
    //#= TemplateClassWithTwoParams(int, float);
    __zz_cib_new = 2,
    //#= int get1() const;
    get1 = 3,
    //#= float get2() const;
    get2 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_Class258 { namespace __zz_cib_methodid {
  enum {
    //#= TemplateClassWithTwoParamsAndDefaultParameter(::TemplateClassWithTwoParamsAndDefaultParameter<int, int> const &);
    __zz_cib_copy = 0,
    //#= ~TemplateClassWithTwoParamsAndDefaultParameter();
    __zz_cib_delete = 1,
    //#= TemplateClassWithTwoParamsAndDefaultParameter(int, int);
    __zz_cib_new = 2,
    //#= int get1() const;
    get1 = 3,
    //#= int get2() const;
    get2 = 4,
    __zz_cib_next_method_id = 5
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
    //#= ::TemplateClassWithTwoParams<int, float> getTemplateClassWithTwoParams() const;
    getTemplateClassWithTwoParams = 4,
    //#= ::TemplateClassWithTwoParamsAndDefaultParameter<int, int> getTemplateClassWithTwoParamsAndDefaultParameter() const;
    getTemplateClassWithTwoParamsAndDefaultParameter = 5,
    __zz_cib_next_method_id = 6
  };
}}}

