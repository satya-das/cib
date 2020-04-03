#include "std-function.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::A(int x)
  : A(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

int A::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


B::B(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

B::~B() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

B::B(int x)
  : B(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
  {}

int B::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


C::C(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

C::C(const ::C& __zz_cib_param0)
  : C(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

C::~C() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

C::C(int x)
  : C(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
  {}

int C::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


T::T(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

T::T(T&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

T::T(const ::T& __zz_cib_param0)
  : T(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

T::~T() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

T::T()
  : T(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

int T::passStdFunctionByValue(::TestCallback callback) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::passStdFunctionByValue<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(callback)>(callback)
    )
  );
}

int T::passStdFunctionByRValueRef(::TestCallback&& callback) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::passStdFunctionByRValueRef<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(callback)>(std::move(callback))
    )
  );
}

void T::passStdFunctionByRef(::TestCallback& callback) {
  __zz_cib_MyHelper::passStdFunctionByRef<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(callback)>(callback)
  );
}

void T::passStdFunctionByPtr(::TestCallback* callback) {
  __zz_cib_MyHelper::passStdFunctionByPtr<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(callback)>(callback)
  );
}

int T::invokeSavedCallbackPassedByValue() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::invokeSavedCallbackPassedByValue<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int T::invokeSavedCallbackPassedByRValueRef() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::invokeSavedCallbackPassedByRValueRef<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::TestCallback T::getCallback() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::TestCallback>(
    __zz_cib_MyHelper::getCallback<__zz_cib_::__zz_cib_RValueAbiType_t<::TestCallback>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

