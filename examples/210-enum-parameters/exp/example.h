#pragma  once

#include "__zz_cib_internal/example-predef.h"

enum E {
  kFirst,
  kSecond
};
enum class EC {
  kECItem1,
  kECItem2
};
enum E8 : char {
  kE8Item1,
  kE8Item2,
  kE8Item3
};
enum EC16 : short {
  kE16Item1,
  kE16Item2,
  kE16Item3
};
class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  int fE(E e) const;
  int fE(EC e) const;
  int fE(E8 e) const;
  int fE(EC16 e) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
