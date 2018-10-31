#include "example.h"

#include <iostream>

void Example::A::SomeFunc()
{
    std::cout << "Example::A::SomeFunc()" << std::endl;
}

void Example::A::VirtFunc()
{
    std::cout << "Example::A::VirtFunc()" << std::endl;
}

void Example::B::VirtFunc()
{
    std::cout << "Example::B::VirtFunc()" << std::endl;
}

