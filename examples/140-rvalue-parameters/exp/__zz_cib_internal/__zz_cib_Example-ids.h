#pragma once

namespace __zz_cib_ { namespace RValueExample {
  //#= FullClassName: ::RValueExample
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 258 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace RValueExample {
  enum __zz_cib_methodid {
    //#= ~RValueExample();
    __zz_cib_delete = 0,
    //#= RValueExample(std::int32_t);
    __zz_cib_new = 1,
    //#= RValueExample(::RValueExample&&);
    __zz_cib_new_2 = 2,
    //#= RValueExample(::RValueExample const &);
    __zz_cib_copy = 3,
    //#= ::RValueExample& operator=(::RValueExample&&);
    __zz_cib_OperatorEqual = 4,
    //#= ::RValueExample& operator=(::RValueExample const &);
    __zz_cib_OperatorEqual_5 = 5,
    //#= std::int32_t Set(::RValueExample&&);
    Set = 6,
    //#= std::int32_t GetValue() const;
    GetValue = 7,
    __zz_cib_next_method_id = 8
  };
}}

