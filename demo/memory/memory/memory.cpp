#include "intrusive_ptr.h"

#include <iostream>

int main()
{
    {
        IntrusiveObjSmartPtrTest smartPtr = IntrusiveObjTest::CreateObject();
    }
    auto smartPtr2 = IntrusiveObjTest::CreateObjectAndReturnSmartPtr();
}
