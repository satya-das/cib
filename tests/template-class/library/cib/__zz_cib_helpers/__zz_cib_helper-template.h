#pragma once

#include "template.h"
#include "__zz_cib_TemplateTests-class-types.h"

namespace __zz_cib_ {
template <> struct __zz_cib_IsProxiedClass<TemplateTest> : std::true_type {};
}
