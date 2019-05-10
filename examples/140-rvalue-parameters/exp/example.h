#pragma  once
#include <cstdint>

#include "__zz_cib_internal/example-predef.h"

class RValueExample
{
public:
  ~RValueExample();
  RValueExample(std::int32_t val);
  RValueExample(RValueExample&& );
  RValueExample(RValueExample const & );
  RValueExample& operator=(RValueExample&& rhs);
  RValueExample& operator=(RValueExample const & rhs);
  std::int32_t Set(RValueExample&& x);
  std::int32_t GetValue() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(RValueExample, RValueExample);
};

#include "__zz_cib_internal/example-postdef.h"
