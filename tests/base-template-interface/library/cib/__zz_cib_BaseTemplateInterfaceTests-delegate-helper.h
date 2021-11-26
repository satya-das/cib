#pragma once

#include "__zz_cib_BaseTemplateInterfaceTests-delegator.h"
#include "__zz_cib_BaseTemplateInterfaceTests-mtable.h"

#define __ZZ_CIB_DELEGATOR_MEMBERS(className, parentName)

/*
#define __ZZ_CIB_DELEGATOR_MEMBERS(className, parentName)                                                              \
  template <typename T>                                                                                               \
  parentName& operator=(const T& rhs)                                                                                 \
  {                                                                                                                    \
    const auto& ret = this->parentName::operator=(rhs);                                                                \
    return const_cast<parentName&>(static_cast<const parentName&>(ret));                                               \
  }

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
