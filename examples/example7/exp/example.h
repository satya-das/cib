#include "__zz_cib_internal/example-predef.h"

//! An abstract class that is an interface and also a facade.
//! It is to illustrate how methods with various access types
//! are exported and imported using CIB architecture.
class IF
{
public:
  IF(IF&& rhs);
private:
  virtual void PrivatePureVirtual() = 0;
  virtual void PrivateVirtual();
protected:
  virtual void ProtectedPureVirtual() = 0;
  virtual void ProtectedVirtual();
  void ProtectedNonVirtual();
public:
  virtual void PublicPureVirtual() = 0;
  virtual void PublicVirtual();
  void PublicNonVirtual();
  virtual ~IF();
protected:
  IF();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(IF, IF);
};
//! Class that has methods to make class IF interface and facade.
class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
protected:
  A();
  //! Makes IF an interface class
  void SetIF(IF* pIF);
  //! Makes IF a facade class.
  IF* GetIF() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-impl.h"
