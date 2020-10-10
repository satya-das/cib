#include "example.h"

A::~A(){
    for (const auto& listOfObjPtr : vectorOfListOfObjPtr_)
    {
        for (const auto* objPtr : listOfObjPtr)
            delete objPtr;
    }
}

C::C(int x)
    :m(x)
{}
