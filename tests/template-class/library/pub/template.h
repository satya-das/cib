#pragma once

template<typename T1>
class TemplateClassWithOneParam
{
public:
  TemplateClassWithOneParam(T1 _a1)
    : a1(_a1)
  {}

  T1 get() const
  {
    return a1;
  }

private:
  T1 a1;
};

template<typename T1, typename T2>
class TemplateClassWithTwoParams
{
public:
  TemplateClassWithTwoParams(T1 _a1, T2 _a2)
    : a1(_a1)
    , a2(_a2)
  {}

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

template<typename T1, typename T2 = T1>
class TemplateClassWithTwoParamsAndDefaultParameter
{
public:
  TemplateClassWithTwoParamsAndDefaultParameter(T1 _a1, T2 _a2)
    : a1(_a1)
    , a2(_a2)
  {}

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
  TemplateTest();

public:
  TemplateClassWithOneParam<int> getTemplateClassWithOneParam() const
  {
    return TemplateClassWithOneParam<int>(102);
  }

  TemplateClassWithTwoParams<int, float> getTemplateClassWithTwoParams() const
  {
    return TemplateClassWithTwoParams<int, float>(102, 100.0);
  }

  TemplateClassWithTwoParamsAndDefaultParameter<int> getTemplateClassWithTwoParamsAndDefaultParameter() const
  {
    return TemplateClassWithTwoParamsAndDefaultParameter<int>(102, 100);
  }
};
