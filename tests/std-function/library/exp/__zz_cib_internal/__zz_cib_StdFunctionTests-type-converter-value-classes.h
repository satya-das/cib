// /*
//     Generated by cib for ABI compatibility and stability.
//     For copyright details refer to the copyright statement of library that contains this file.
// */

// #pragma once

// #include "__zz_cib_StdFunctionTests-type-converter-base.h"

// #include "__zz_cib_StdFunctionTests-class-types.h"

// namespace __zz_cib_ {

// template <typename T>
// class __zz_cib_CoreTypeToAbiType<T, std::enable_if_t<__zz_cib_IsValueClass_v<T>, void>>
// {
//   T m;

// public:
//   T convert()
//   {
//     return std::move(m);
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T x)
//     : m(std::move(x))
//   {
//   }

//   operator T()
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_CoreTypeToAbiType<T*,
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   T* m;

// public:
//   T* convert()
//   {
//     return m;
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T* x)
//     : m(x)
//   {
//   }

//   operator T*()
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_CoreTypeToAbiType<T&,
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   T& m;

// public:
//   T* convert()
//   {
//     return &m;
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T& x)
//     : m(x)
//   {
//   }

//   operator T*()
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_CoreTypeToAbiType<T&&, std::enable_if_t<__zz_cib_IsValueClass_v<T>, void>>
// {
//   T m;

// public:
//   T* convert()
//   {
//     return &m;
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T&& x)
//     : m(x)
//   {
//   }

//   operator T*()
//   {
//     return convert();
//   }
// };

// template <typename T, int N>
// class __zz_cib_CoreTypeToAbiType<T[N],
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   T* m;

// public:
//   T* convert()
//   {
//     return m;
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T x[N])
//     : m(x)
//   {
//   }

//   operator T*() const
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_CoreTypeToAbiType<T[],
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   T* m;

// public:
//   T* convert()
//   {
//     return m;
//   }

// public:
//   __zz_cib_CoreTypeToAbiType(T x[])
//     : m(x)
//   {
//   }

//   operator T*() const
//   {
//     return convert();
//   }
// };

// /////////////////////////////////////////////////////////////////////////////////////////////

// template <typename T>
// class __zz_cib_AbiTypeToCoreType<T, std::enable_if_t<__zz_cib_IsValueClass_v<T>, void>>
// {
//   __zz_cib_AbiType_t<T> m;

// public:
//   __zz_cib_AbiTypeToCoreType(__zz_cib_AbiType_t<T> x)
//     : m(x)
//   {
//   }

//   T convert() const
//   {
//     return m;
//   }

//   operator T() const
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_AbiTypeToCoreType<T*,
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   static_assert(std::is_same_v<T*, __zz_cib_AbiType_t<T*>>);

//   T* m;

// public:
//   __zz_cib_AbiTypeToCoreType(T* x)
//     : m(x)
//   {
//   }

//   T& convert()
//   {
//     return *m;
//   }

//   operator T&()
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_AbiTypeToCoreType<T&,
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   static_assert(std::is_same_v<T*, __zz_cib_AbiType_t<T&>>);

//   T* m;

// public:
//   __zz_cib_AbiTypeToCoreType(T* x)
//     : m(x)
//   {
//   }

//   T& convert()
//   {
//     return *m;
//   }

//   operator T&()
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_AbiTypeToCoreType<T&&,
//                                  std::enable_if_t<__zz_cib_IsValueClass_v<__zz_cib_RemoveAllDecorations_t<T>>, void>>
// {
//   static_assert(std::is_same_v<T*, __zz_cib_AbiType_t<T&&>>);

//   T* m;

// public:
//   __zz_cib_AbiTypeToCoreType(T* x)
//     : m(x)
//   {
//   }

//   T&& convert()
//   {
//     return std::move(*m);
//   }

//   operator T &&()
//   {
//     return convert();
//   }
// };

// template <typename T, int N>
// class __zz_cib_AbiTypeToCoreType<T[N], std::enable_if_t<__zz_cib_IsValueClass_v<T>, void>>
// {
//   T* m;

// public:
//   T* convert() const
//   {
//     return m;
//   }

// public:
//   __zz_cib_AbiTypeToCoreType(T* x)
//     : m(x)
//   {
//   }

//   operator T*() const
//   {
//     return convert();
//   }
// };

// template <typename T>
// class __zz_cib_AbiTypeToCoreType<T[], std::enable_if_t<__zz_cib_IsValueClass_v<T>, void>>
// {
//   T* m;

// public:
//   T* convert() const
//   {
//     return m;
//   }

// public:
//   __zz_cib_AbiTypeToCoreType(T* x)
//     : m(x)
//   {
//   }

//   operator T*() const
//   {
//     return convert();
//   }
// };

// } // namespace __zz_cib_
