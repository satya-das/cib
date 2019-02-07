#pragma once

using Opaque = class Dummy;

struct Pod
{
  int i;
  double d;
  Opaque* pObj;
};

class C {};

struct NonPod1
{
  C c;
};

struct NonPod2
{
  C* c;
};

struct NonPod3
{
  int i;
  double d;
private:
  Opaque* pObj;
};

class A
{
public:
  A();
  void setPod(Pod& p) {}
  void setPod(Pod* p) {}
  void setNonPod1(NonPod1& n) {}
  void setNonPod2(NonPod2& n) {}
  void setNonPod3(NonPod3& n) {}
};
