#include "example.h"

RValueExample::RValueExample(RValueExample&& x)
  : mValue(x.mValue)
{
  x.mValue = 0;
}

RValueExample& RValueExample::operator=(RValueExample&& rhs)
{
  mValue     = rhs.mValue;
  rhs.mValue = 0;
}

RValueExample& RValueExample::operator=(const RValueExample& rhs)
{
  mValue = rhs.mValue;
}

std::int32_t RValueExample::Set(RValueExample&& x)
{
  mValue   = x.mValue;
  x.mValue = 0;
}

std::int32_t RValueExample::GetValue() const
{
  return mValue;
}
