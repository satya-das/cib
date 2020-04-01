#pragma once

#include <functional>

class A
{
  int m;
public:
  A(int x);
  ~A();
  int f() const {
    return m;
  }
};

class B
{
  int m;
public:
  B(int x);
  int f() const {
    return m;
  }  
};

class C
{
  int m;
public:
  C(int x);
  int f() const {
    return m;
  }
};

using TestCallback = std::function<A(B, C)>;

class T
{
public:
  T();

  int passStdFunctionByValue(TestCallback callback) {
    savedCallbackPassedByValue = callback;
    return invokeCallback(callback);
  }

  int passStdFunctionByRValueRef(TestCallback&& callback) {
    savedCallbackPassedByRValueRef = callback;
    return invokeCallback(callback);
  }

  void passStdFunctionByRef(TestCallback& callback) {
    callback = [](B b, C c) {
      return A(b.f() * c.f());
    };
  }

  void passStdFunctionByPtr(TestCallback* callback) {
    *callback = [](B b, C c) {
      return A(b.f() + c.f());
    };
  }

  int invokeSavedCallbackPassedByValue() const {
    return invokeCallback(savedCallbackPassedByValue);
  }

  int invokeSavedCallbackPassedByRValueRef() const {
    return invokeCallback(savedCallbackPassedByRValueRef);
  }

  TestCallback getCallback() const {
    return [](B b, C c) {
      return A(b.f() - c.f());
    };
  }

private:
  static int invokeCallback(const TestCallback& callback) {
    B b(199);
    C c(299);
    return callback(b, c).f();
  }

private:
  TestCallback savedCallbackPassedByValue;
  TestCallback savedCallbackPassedByRValueRef;
};

// class I
// {
// public:
//   virtual int passStdFunctionByValue(TestCallback callback) const = 0;
//   virtual int passStdFunctionByValue2(TestCallback&& callback) const = 0;
// };
