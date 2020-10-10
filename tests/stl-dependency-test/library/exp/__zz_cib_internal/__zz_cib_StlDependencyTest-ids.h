#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class263 {
  //#= FullClassName: ::ExampleClass
  enum { __zz_cib_classid = 263 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::__zz_cib_stl_helpers
  enum { __zz_cib_classid = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  //#= FullClassName: ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >
  enum { __zz_cib_classid = 258 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  //#= FullClassName: ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>
  enum { __zz_cib_classid = 257 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class260 {
  //#= FullClassName: ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >
  enum { __zz_cib_classid = 260 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  //#= FullClassName: ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>
  enum { __zz_cib_classid = 259 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class261 {
  //#= FullClassName: ::std
  enum { __zz_cib_classid = 261 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class261 { namespace __zz_cib_Class262 {
  //#= FullClassName: ::std::vector<::ExampleClass*>
  enum { __zz_cib_classid = 262 };
}}}}

namespace __zz_cib_ { namespace StlDependencyTest {
  enum { __zz_cib_next_class_id = 264 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class263 {
  enum __zz_cib_Methodid {
    //#= ExampleClass(const ::ExampleClass&);
    __zz_cib_Copy_0 = 0,
    //#= ExampleClass();
    __zz_cib_New_1 = 1,
    //#= ~ExampleClass();
    __zz_cib_Delete_2 = 2,
    //#= ::std::vector<::ExampleClass*> get();
    get_3 = 3,
    //#= int value() const;
    value_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  enum __zz_cib_Methodid {
    //#= vector_iterator(const vector_iterator<::ExampleClass* const >&);
    __zz_cib_Copy_0 = 0,
    //#= ~vector_iterator();
    __zz_cib_Delete_1 = 1,
    //#= vector_iterator();
    __zz_cib_New_2 = 2,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::reference operator*();
    __zz_cib_OperatorMul_3 = 3,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::pointer operator->();
    __zz_cib_OperatorArrow_4 = 4,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::const_reference operator*() const;
    __zz_cib_OperatorMul_5 = 5,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >& operator++();
    __zz_cib_OperatorInc_6 = 6,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const > operator++(int);
    __zz_cib_OperatorInc_7 = 7,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >& operator--();
    __zz_cib_OperatorDec_8 = 8,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const > operator--(int);
    __zz_cib_OperatorDec_9 = 9,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::reference operator[](::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorIndex_10 = 10,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >& operator+=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type);
    __zz_cib_OperatorPlusEq_11 = 11,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const > operator+(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorPlus_12 = 12,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >& operator-=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type);
    __zz_cib_OperatorMinusEq_13 = 13,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const > operator-(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorMinus_14 = 14,
    //#= bool operator==(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorCmpEq_15 = 15,
    //#= bool operator!=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorNotEq_16 = 16,
    //#= bool operator<(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorLT_17 = 17,
    //#= bool operator>(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorGT_18 = 18,
    //#= bool operator<=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorLE_19 = 19,
    //#= bool operator>=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorGE_20 = 20,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >::difference_type operator-(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorMinus_21 = 21,
    __zz_cib_next_method_id = 22
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  enum __zz_cib_Methodid {
    //#= vector_iterator(const vector_iterator<::ExampleClass*>&);
    __zz_cib_Copy_0 = 0,
    //#= ~vector_iterator();
    __zz_cib_Delete_1 = 1,
    //#= vector_iterator();
    __zz_cib_New_2 = 2,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference operator*();
    __zz_cib_OperatorMul_3 = 3,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::pointer operator->();
    __zz_cib_OperatorArrow_4 = 4,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference operator*() const;
    __zz_cib_OperatorMul_5 = 5,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator++();
    __zz_cib_OperatorInc_6 = 6,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator++(int);
    __zz_cib_OperatorInc_7 = 7,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator--();
    __zz_cib_OperatorDec_8 = 8,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator--(int);
    __zz_cib_OperatorDec_9 = 9,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference operator[](::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorIndex_10 = 10,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator+=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type);
    __zz_cib_OperatorPlusEq_11 = 11,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator+(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorPlus_12 = 12,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator-=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type);
    __zz_cib_OperatorMinusEq_13 = 13,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator-(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorMinus_14 = 14,
    //#= bool operator==(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorCmpEq_15 = 15,
    //#= bool operator!=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorNotEq_16 = 16,
    //#= bool operator<(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorLT_17 = 17,
    //#= bool operator>(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorGT_18 = 18,
    //#= bool operator<=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorLE_19 = 19,
    //#= bool operator>=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorGE_20 = 20,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type operator-(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&);
    __zz_cib_OperatorMinus_21 = 21,
    __zz_cib_next_method_id = 22
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class260 {
  enum __zz_cib_Methodid {
    //#= vector_reverse_iterator(const vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_Copy_0 = 0,
    //#= ~vector_reverse_iterator();
    __zz_cib_Delete_1 = 1,
    //#= vector_reverse_iterator();
    __zz_cib_New_2 = 2,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference operator*();
    __zz_cib_OperatorMul_3 = 3,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::pointer operator->() const;
    __zz_cib_OperatorArrow_4 = 4,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::const_reference operator*() const;
    __zz_cib_OperatorMul_5 = 5,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >& operator++();
    __zz_cib_OperatorInc_6 = 6,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const > operator++(int);
    __zz_cib_OperatorInc_7 = 7,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >& operator--();
    __zz_cib_OperatorDec_8 = 8,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const > operator--(int);
    __zz_cib_OperatorDec_9 = 9,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference operator[](::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorIndex_10 = 10,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >& operator+=(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type);
    __zz_cib_OperatorPlusEq_11 = 11,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const > operator+(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorPlus_12 = 12,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >& operator-=(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type);
    __zz_cib_OperatorMinusEq_13 = 13,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const > operator-(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type) const;
    __zz_cib_OperatorMinus_14 = 14,
    //#= bool operator==(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorCmpEq_15 = 15,
    //#= bool operator!=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorNotEq_16 = 16,
    //#= bool operator<(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorLT_17 = 17,
    //#= bool operator>(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorGT_18 = 18,
    //#= bool operator<=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorLE_19 = 19,
    //#= bool operator>=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorGE_20 = 20,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type operator-(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&);
    __zz_cib_OperatorMinus_21 = 21,
    __zz_cib_next_method_id = 22
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  enum __zz_cib_Methodid {
    //#= vector_reverse_iterator(const vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_Copy_0 = 0,
    //#= ~vector_reverse_iterator();
    __zz_cib_Delete_1 = 1,
    //#= vector_reverse_iterator();
    __zz_cib_New_2 = 2,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference operator*();
    __zz_cib_OperatorMul_3 = 3,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::pointer operator->() const;
    __zz_cib_OperatorArrow_4 = 4,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::const_reference operator*() const;
    __zz_cib_OperatorMul_5 = 5,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>& operator++();
    __zz_cib_OperatorInc_6 = 6,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*> operator++(int);
    __zz_cib_OperatorInc_7 = 7,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>& operator--();
    __zz_cib_OperatorDec_8 = 8,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*> operator--(int);
    __zz_cib_OperatorDec_9 = 9,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference operator[](::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorIndex_10 = 10,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>& operator+=(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type);
    __zz_cib_OperatorPlusEq_11 = 11,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*> operator+(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorPlus_12 = 12,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>& operator-=(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type);
    __zz_cib_OperatorMinusEq_13 = 13,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*> operator-(::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type) const;
    __zz_cib_OperatorMinus_14 = 14,
    //#= bool operator==(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorCmpEq_15 = 15,
    //#= bool operator!=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorNotEq_16 = 16,
    //#= bool operator<(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorLT_17 = 17,
    //#= bool operator>(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorGT_18 = 18,
    //#= bool operator<=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorLE_19 = 19,
    //#= bool operator>=(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorGE_20 = 20,
    //#= ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type operator-(const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&);
    __zz_cib_OperatorMinus_21 = 21,
    __zz_cib_next_method_id = 22
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class261 { namespace __zz_cib_Class262 {
  enum __zz_cib_Methodid {
    //#= vector();
    __zz_cib_New_0 = 0,
    //#= vector(::std::vector<::ExampleClass*>::size_type);
    __zz_cib_New_1 = 1,
    //#= vector(::std::vector<::ExampleClass*>::size_type, ::ExampleClass* const&);
    __zz_cib_New_2 = 2,
    //#= vector(const ::std::vector<::ExampleClass*>&);
    __zz_cib_Copy_3 = 3,
    //#= vector(::std::vector<::ExampleClass*>&&);
    __zz_cib_New_4 = 4,
    //#= ~vector();
    __zz_cib_Delete_5 = 5,
    //#= ::std::vector<::ExampleClass*>& operator=(const ::std::vector<::ExampleClass*>&);
    __zz_cib_OperatorEqual_6 = 6,
    //#= ::std::vector<::ExampleClass*>& operator=(::std::vector<::ExampleClass*>&&);
    __zz_cib_OperatorEqual_7 = 7,
    //#= void assign(::std::vector<::ExampleClass*>::size_type, ::ExampleClass* const&);
    assign_8 = 8,
    //#= ::std::vector<::ExampleClass*>::iterator begin();
    begin_9 = 9,
    //#= ::std::vector<::ExampleClass*>::const_iterator begin() const;
    begin_10 = 10,
    //#= ::std::vector<::ExampleClass*>::iterator end();
    end_11 = 11,
    //#= ::std::vector<::ExampleClass*>::const_iterator end() const;
    end_12 = 12,
    //#= ::std::vector<::ExampleClass*>::reverse_iterator rbegin();
    rbegin_13 = 13,
    //#= ::std::vector<::ExampleClass*>::const_reverse_iterator rbegin() const;
    rbegin_14 = 14,
    //#= ::std::vector<::ExampleClass*>::reverse_iterator rend();
    rend_15 = 15,
    //#= ::std::vector<::ExampleClass*>::const_reverse_iterator rend() const;
    rend_16 = 16,
    //#= ::std::vector<::ExampleClass*>::const_iterator cbegin() const;
    cbegin_17 = 17,
    //#= ::std::vector<::ExampleClass*>::const_iterator cend() const;
    cend_18 = 18,
    //#= ::std::vector<::ExampleClass*>::const_reverse_iterator crbegin() const;
    crbegin_19 = 19,
    //#= ::std::vector<::ExampleClass*>::const_reverse_iterator crend() const;
    crend_20 = 20,
    //#= bool empty() const;
    empty_21 = 21,
    //#= ::std::vector<::ExampleClass*>::size_type size() const;
    size_22 = 22,
    //#= ::std::vector<::ExampleClass*>::size_type max_size() const;
    max_size_23 = 23,
    //#= ::std::vector<::ExampleClass*>::size_type capacity() const;
    capacity_24 = 24,
    //#= void resize(::std::vector<::ExampleClass*>::size_type);
    resize_25 = 25,
    //#= void resize(::std::vector<::ExampleClass*>::size_type, ::ExampleClass* const&);
    resize_26 = 26,
    //#= void reserve(::std::vector<::ExampleClass*>::size_type);
    reserve_27 = 27,
    //#= void shrink_to_fit();
    shrink_to_fit_28 = 28,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference operator[](::std::vector<::ExampleClass*>::size_type);
    __zz_cib_OperatorIndex_29 = 29,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference operator[](::std::vector<::ExampleClass*>::size_type) const;
    __zz_cib_OperatorIndex_30 = 30,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference at(::std::vector<::ExampleClass*>::size_type) const;
    at_31 = 31,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference at(::std::vector<::ExampleClass*>::size_type);
    at_32 = 32,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference front();
    front_33 = 33,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference front() const;
    front_34 = 34,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference back();
    back_35 = 35,
    //#= ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference back() const;
    back_36 = 36,
    //#= ::ExampleClass** data();
    data_37 = 37,
    //#= ::ExampleClass* const * data() const;
    data_38 = 38,
    //#= void push_back(::ExampleClass* const&);
    push_back_39 = 39,
    //#= void push_back(::ExampleClass*&&);
    push_back_40 = 40,
    //#= void pop_back();
    pop_back_41 = 41,
    //#= ::std::vector<::ExampleClass*>::iterator insert(::std::vector<::ExampleClass*>::const_iterator, ::ExampleClass* const&);
    insert_42 = 42,
    //#= ::std::vector<::ExampleClass*>::iterator insert(::std::vector<::ExampleClass*>::const_iterator, ::ExampleClass*&&);
    insert_43 = 43,
    //#= ::std::vector<::ExampleClass*>::iterator insert(::std::vector<::ExampleClass*>::const_iterator, ::std::vector<::ExampleClass*>::size_type, ::ExampleClass* const&);
    insert_44 = 44,
    //#= ::std::vector<::ExampleClass*>::iterator erase(::std::vector<::ExampleClass*>::const_iterator);
    erase_45 = 45,
    //#= ::std::vector<::ExampleClass*>::iterator erase(::std::vector<::ExampleClass*>::const_iterator, ::std::vector<::ExampleClass*>::const_iterator);
    erase_46 = 46,
    //#= void swap(::std::vector<::ExampleClass*>&);
    swap_47 = 47,
    //#= void clear();
    clear_48 = 48,
    __zz_cib_next_method_id = 49
  };
}}}}

