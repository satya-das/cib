#include "example.h"

#include <assert.h>

A::A()
{}

B::B()
{
    const A* t = this;
    assert(reinterpret_cast<const void*>(t) != reinterpret_cast<const void*>(this));
}
