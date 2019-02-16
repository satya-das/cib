//! An abstract class that is an interface and also a facade.
//! It is to illustrate how methods with various access types
//! are exported and imported using CIB architecture.
class IF
{
private:
  virtual int PrivatePureVirtual() = 0;
  virtual int PrivateVirtual()      { return 100; }
  int         PrivateNonVirtual()   { return 200; }

protected:
  virtual int ProtectedPureVirtual() = 0;
  virtual int ProtectedVirtual()    { return 300; }
  int         ProtectedNonVirtual() { return 400; }

public:
  virtual int PublicPureVirtual() = 0;
  virtual int PublicVirtual()       { return 500; }

public:
  int PublicNonVirtual()
  {
    return PublicPureVirtual() +
      PublicVirtual() +
      ProtectedPureVirtual() +
      ProtectedVirtual() +
      ProtectedNonVirtual() +
      PrivatePureVirtual() +
      PrivateVirtual() +
      PrivateNonVirtual();
  }

  virtual ~IF() {}
};

//! Class that has methods to make class IF interface and facade.
class A
{
public:
  A();

  //! Makes IF an interface class
  int SetIF(IF* pIF)
  {
    return pIF->PublicNonVirtual();
  }

  //! Makes IF a facade class.
  IF* GetIF() const
  {
    return nullptr;
  }
};
