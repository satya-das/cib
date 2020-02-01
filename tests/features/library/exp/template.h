#pragma  once

#include "__zz_cib_internal/template-predef.h"

template <typename T1>
class TemplateClassWithOneParam
{
public:
  TemplateClassWithOneParam(T1 _a1)
    : a1(_a1)
  {
  }
  T1 get() const
  {
    return a1;
  }
private:
  T1 a1;
};

template <typename T1, typename T2>
class TemplateClassWithTwoParams
{
public:
  TemplateClassWithTwoParams(T1 _a1, T2 _a2)
    : a1(_a1)
    , a2(_a2)
  {
  }
  T1 get1() const
  {
    return a1;
  }
  T2 get2() const
  {
    return a2;
  }
private:
  T1 a1;
  T2 a2;
};

class TemplateTest
{
public:
  TemplateTest(TemplateTest&& rhs);
public:
  TemplateTest(TemplateTest const & );
  ~TemplateTest();
  TemplateTest();
  TemplateClassWithOneParam<int> getTemplateClassWithOneParam() const;
  TemplateClassWithTwoParams<int, float> getTemplateClassWithTwoParams() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(TemplateTest, TemplateTest);
};

#include "__zz_cib_internal/template-postdef.h"
