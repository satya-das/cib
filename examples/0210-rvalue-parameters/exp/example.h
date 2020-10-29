#pragma  once
#include <cstdint>

#include "__zz_cib_internal/example-predef.h"

class RValueExample
{
public:
  ~RValueExample();
  RValueExample(std::int32_t val);
  RValueExample(RValueExample&&);
  RValueExample(const RValueExample&);
  RValueExample& operator=(RValueExample&& rhs);
  RValueExample& operator=(const RValueExample& rhs);
  std::int32_t Set(RValueExample&& x);
  std::int32_t GetValue() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(RValueExample, RValueExample);
};

#include "__zz_cib_internal/example-postdef.h"
