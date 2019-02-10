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
    return &mPublicFacade;
  }

  Facade* PrivateFacade1() {
    return &mPrivateFacade1;
  }

  Facade* PrivateFacade2() {
    return &mPrivateFacade2;
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

private:
  PublicFacadeImpl    mPublicFacade;
  PrivateFacadeImpl1  mPrivateFacade1;
  PrivateFacadeImpl2  mPrivateFacade2;
};
