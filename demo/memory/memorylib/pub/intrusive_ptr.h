#pragma once

#include "intrusive_base.h"

#include <iostream>

class IntrusiveObjTest;
using IntrusiveObjSmartPtrTest = IntrusiveSmartPtr<IntrusiveObjTest>;

class IntrusiveObjTest : public IntrusivePtrBase
{
private:
    int refCount_;
public:
    void AddRef() override { ++refCount_; }
    void Release() override { --refCount_; if (!refCount_) delete this; }

public:
    IntrusiveObjTest()
        : refCount_(0)
    {
        std::cout << "Ctor IntrusiveObjTest()\n";
    }
    ~IntrusiveObjTest()
    {
        std::cout << "Dtor ~IntrusiveObjTest()\n";
    }
    static IntrusiveObjTest* CreateObject()
    {
        return new IntrusiveObjTest;
    }

    static IntrusiveObjSmartPtrTest CreateObjectAndReturnSmartPtr()
    {
        return new IntrusiveObjTest;
    }
};
