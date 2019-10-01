#pragma once

#include <functional>

using DeleteListener = std::function<void(void*)>;

struct DeleteListenerAccessor
{
    static DeleteListener& getDeleteListener() {
        static DeleteListener gDeleteListener;
        return gDeleteListener;
    }
};

inline void* operator new(size_t l)
{
    return malloc(l);
}

inline void operator delete(void * p) 
{
    if (DeleteListenerAccessor::getDeleteListener())
        DeleteListenerAccessor::getDeleteListener()(p);

    free(p);
}
