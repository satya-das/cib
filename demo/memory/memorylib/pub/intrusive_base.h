#pragma once

#include <iostream>

class IntrusivePtrBase
{
public:
    virtual void AddRef() = 0;
    virtual void Release() = 0;
};

struct PtrTest
{
public:
    void SetIntrusivePtr(IntrusivePtrBase* ptr);

private:
    IntrusivePtrBase* ptr_;
};

template<typename _Ty>
class IntrusiveSmartPtr
{
    _Ty* obj_;

private:
    void addRef()
    {
        std::cout << "addref: in file " << __FILE__ 
        if (obj_)
            obj_->AddRef();
    }
    void release()
    {
        if (obj_)
            obj_->Release();
    }
public:
    IntrusiveSmartPtr(const _Ty* obj = nullptr)
        : obj_(const_cast<_Ty*>(obj))
    {
        addRef();
    }

    IntrusiveSmartPtr(const IntrusiveSmartPtr& ptr)
        : IntrusiveSmartPtr(ptr.obj_)
    {        
    }

    ~IntrusiveSmartPtr()
    {
        release();
    }

    _Ty* get() const
    {
        return obj_;
    }
};
