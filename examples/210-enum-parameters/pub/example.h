#pragma once

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
  A();
public:
  int fE(E e) const {
    return static_cast<int>(e);
  }
  int fE(EC e) const {
    return static_cast<int>(e);
  }
  int fE(E8 e) const {
    return static_cast<int>(e);
  }
  int fE(EC16 e) const {
    return static_cast<int>(e);
  }
};
