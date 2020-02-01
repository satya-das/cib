#pragma once

#define __ZZ_CIB_DELEGATOR_MEMBERS(className, parentName)                                                              \
  template <typename _T>                                                                                               \
  parentName& operator=(const _T& rhs)                                                                                 \
  {                                                                                                                    \
    const auto& ret = this->parentName::operator=(rhs);                                                                \
    return const_cast<parentName&>(static_cast<const parentName&>(ret));                                               \
  }

/*
  void __zz_cib_TestPointerCompatibility() {                                    \
    {                                                                           \
      constexpr auto* pClass  = static_cast<className*>(nullptr) + 0xabad1deaU;   \
      constexpr void* pointer = reinterpret_cast<void*>(pClass);                \
      constexpr auto* pParent = reinterpret_cast<void*>(static_cast<parentName*>(pClass));  \
      static_assert(pParent == pointer,                                                     \
        "Derived class pointer should be litterally reinterpretable as parent class");      \
    }                                                                                       \
  }
*/
