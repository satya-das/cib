#include "example.h"

A::A() noexcept
{
}

A::A(const A&) noexcept
{
}

A::~A()
{
}

CustomBaseException::~CustomBaseException()
{
}

CustomDerivedException::~CustomDerivedException()
{
}
