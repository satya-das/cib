#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class259 {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 259 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  //#= FullClassName: ::C
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 { namespace __zz_cib_Generic {
  //#= FullClassName: ::C::__zz_cib_Generic
  enum { __zz_cib_classid = 260 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::std
  enum { __zz_cib_classid = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  //#= FullClassName: ::std::vector<::C>
  enum { __zz_cib_classid = 257 };
}}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 261 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class259 {
  enum __zz_cib_methodid {
    //#= A(const A&);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= std::vector<C> g() const;
    g = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  enum __zz_cib_methodid {
    //#= C(const C&);
    __zz_cib_copy = 0,
    //#= C(int);
    __zz_cib_new = 1,
    //#= ~C();
    __zz_cib_delete = 2,
    //#= int f() const;
    f = 3,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 { namespace __zz_cib_Generic {
  enum __zz_cib_methodid {
    //#= int f() const;
    f = 0,
    //#= ~C();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  enum __zz_cib_methodid {
    //#= vector();
    __zz_cib_new = 0,
    //#= vector(size_type, const value_type&);
    __zz_cib_new_1 = 1,
    //#= vector(const vector<::C>&);
    __zz_cib_copy = 2,
    //#= vector(vector<::C>&&);
    __zz_cib_new_3 = 3,
    //#= ~vector();
    __zz_cib_delete = 4,
    //#= vector<::C>& operator=(const vector<::C>&);
    __zz_cib_OperatorEqual = 5,
    //#= vector<::C>& operator=(vector<::C>&&);
    __zz_cib_OperatorEqual_6 = 6,
    //#= void assign(size_type, const value_type&);
    assign = 7,
    //#= size_type size() const;
    size = 8,
    //#= size_type max_size() const;
    max_size = 9,
    //#= void resize(size_type, const value_type&);
    resize = 10,
    //#= void shrink_to_fit();
    shrink_to_fit = 11,
    //#= size_type capacity() const;
    capacity = 12,
    //#= bool empty() const;
    empty = 13,
    //#= void reserve(size_type);
    reserve = 14,
    //#= value_type& operator[](size_type);
    __zz_cib_OperatorIndex = 15,
    //#= const value_type& operator[](size_type) const;
    __zz_cib_OperatorIndex_16 = 16,
    //#= value_type& at(size_type);
    at = 17,
    //#= const value_type& at(size_type) const;
    at_18 = 18,
    //#= value_type& front();
    front = 19,
    //#= const value_type& front() const;
    front_20 = 20,
    //#= value_type& back();
    back = 21,
    //#= const value_type& back() const;
    back_22 = 22,
    //#= void push_back(const value_type&);
    push_back = 23,
    //#= void push_back(value_type&&);
    push_back_24 = 24,
    //#= void pop_back();
    pop_back = 25,
    //#= void swap(vector<::C>&);
    swap = 26,
    //#= void clear();
    clear = 27,
    __zz_cib_next_method_id = 28
  };
}}}}

