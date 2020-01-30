#pragma once

class A
{
public:
  A();
  virtual ~A() {}

  int f0() { return 0; }

#if COND // Start of a conditional group, also start of 1st subgroup
  int f1() { return 1; }
  int f2() { return 2; }
#elif COND2 // OPTIONAL. Start of 2nd subgroup
  int f3() { return 3; }
#else // OPTIONAL. Start of 3rd subgroup
  int f4() { return 4; }
  int f5() { return 5; }
  int f6() { return 6; }
#endif // REQUIRED

  int f7() { return 7; }

  int func() const {
    return DoFunc();
  }

protected:
  virtual int DoFunc() const {
    return 500;
  }
};

class B
{
public:
  B();
  ~B() {}

#if COND // Start of a conditional group, also start of 1st subgroup
  int f1() { return 1; }
  int f2() { return 2; }
#endif // REQUIRED
};

class C
{
public:
  C();
  ~C() {}

#if COND // Start of a conditional group, also start of 1st subgroup
  int f1() { return 1; }
  int f2() { return 2; }
#endif // REQUIRED
  int f3() { return 3; }
};
