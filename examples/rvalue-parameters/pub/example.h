#pragma once

#include <cstdint>

class RValueExample
{
public:
  RValueExample(std::int32_t val)
    : mValue(val)
  {
  }
  RValueExample(RValueExample&&);
  RValueExample(const RValueExample&);

  RValueExample& operator=(RValueExample&& rhs);
  RValueExample& operator=(const RValueExample& rhs);

  std::int32_t Set(RValueExample&& x);
  std::int32_t GetValue() const;

private:
  std::int32_t mValue{0};
};
