#pragma once

#include "SkRefCnt.h"
#include "__zz_cib_Example-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<SkRefCntBase> : std::true_type {};
}
