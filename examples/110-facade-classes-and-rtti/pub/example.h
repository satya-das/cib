#pragma once

class Facade
{
public:
  virtual void F() = 0;

  virtual ~Facade() {}
};

class PublicFacadeImpl : public Facade
{
public:
  PublicFacadeImpl() {}
  void F() override {}
};

class A
{
public:
  A();

  Facade* PublicFacade() {
    return new PublicFacadeImpl();
  }

  Facade* PrivateFacade1() {
    return new PrivateFacadeImpl1();
  }

  Facade* PrivateFacade2() {
    return new PrivateFacadeImpl2();
  }

private:
  class PrivateFacadeImpl1 : public Facade
  {
    void F() override {}
  };

  class PrivateFacadeImpl2 : public PublicFacadeImpl
  {
    void F() override {}
  };
};
