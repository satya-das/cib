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

class TemplateTest
{
public:
  TemplateTest();
  
public:
  TemplateClassWithOneParam<int> getTemplateClassWithOneParam() const
  {
    return TemplateClassWithOneParam<int>(102);
  }
private:
};

