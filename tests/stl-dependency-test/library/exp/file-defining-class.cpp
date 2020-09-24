#include "file-defining-class.h"
#include <vector>


ExampleClass::ExampleClass(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

ExampleClass::ExampleClass(ExampleClass&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

ExampleClass::ExampleClass(const ::ExampleClass& __zz_cib_param0)
  : ExampleClass(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

ExampleClass::ExampleClass()
  : ExampleClass(__zz_cib_MyHelper::__zz_cib_new_1(
    ))
  {}

ExampleClass::~ExampleClass() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::std::vector<::ExampleClass*> ExampleClass::get() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>>(
    __zz_cib_MyHelper::get_3<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::ExampleClass*>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int ExampleClass::value() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::value_4<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

