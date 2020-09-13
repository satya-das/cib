#include "example.h"
#include <list>
#include <vector>


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new_1(
    ))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::std::vector<::C> A::g() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>>(
    __zz_cib_MyHelper::g_3<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::C>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::C> A::getLargeVector() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>>(
    __zz_cib_MyHelper::getLargeVector_4<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::C>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::C*> A::getObjPtrVec() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>>(
    __zz_cib_MyHelper::getObjPtrVec_5<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::C*>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::sumInLargeVector() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::sumInLargeVector_6<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::C>::iterator A::i() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::iterator>(
    __zz_cib_MyHelper::i_7<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::C>::iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::C>::reverse_iterator A::r() {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::reverse_iterator>(
    __zz_cib_MyHelper::r_8<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::list<::C> A::l() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>>(
    __zz_cib_MyHelper::l_9<__zz_cib_::__zz_cib_AbiType_t<::std::list<::C>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::std::vector<::std::list<::C*>> A::vl() const {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>>(
    __zz_cib_MyHelper::vl_10<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::std::list<::C*>>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

