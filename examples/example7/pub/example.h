//! An abstract class that is an interface and also a facade.
//! It is to illustrate how methods with various access types
//! are exported and imported using CIB architecture.
class IF
{
private:
  virtual void PrivatePureVirtual() = 0;
  virtual void PrivateVirtual() {}
  void         PrivateNonVirtual() {}

protected:
  virtual void ProtectedPureVirtual() = 0;
  virtual void ProtectedVirtual() {}
  void         ProtectedNonVirtual() {}

public:
  virtual void PublicPureVirtual() = 0;
  virtual void PublicVirtual() {}

public:
  void PublicNonVirtual()
  {
    PublicPureVirtual();
    PublicVirtual();
    ProtectedPureVirtual();
    ProtectedVirtual();
    ProtectedNonVirtual();
    PrivatePureVirtual();
    PrivateVirtual();
    PrivateNonVirtual();
  }

  virtual ~IF() {}
};

//! Class that has methods to make class IF interface and facade.
class A
{
protected:
  A();

  //! Makes IF an interface class
  void SetIF(IF* pIF)
  {
    pIF->PublicNonVirtual();
  }

  //! Makes IF a facade class.
  IF* GetIF() const
  {
    return nullptr;
  }
};
