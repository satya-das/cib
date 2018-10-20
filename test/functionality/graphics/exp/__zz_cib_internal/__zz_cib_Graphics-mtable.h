#ifndef __zz_cib_MethodTable_defined

#  include <cassert>
#  include <cstdint>
#  include <functional>

namespace __zz_cib_ {

//! Generic type for function pointer.
using __zz_cib_MTableEntry = int (*)();

extern "C"
struct __zz_cib_MethodTable
{
  const __zz_cib_MTableEntry* methods;
  const std::uint32_t         numMethods; //!< Number of methods in method table.
};

//! Fetches method from a method table
//! @param mtbl Method table from which to fetch the method.
//! @param slot Index at which to fetch method from.
//! @return __zz_cib_MTableEntry value which is guarenteed to be non-null.
//! @note Will throw std::bad_function_call() if method table doesn't contain
//! method or the fetched method is null.
inline __zz_cib_MTableEntry __zz_cib_GetMTableEntry(const __zz_cib_MethodTable* mtbl, std::uint32_t slot)
{
  assert(slot >= 0);
  if ((slot > mtbl->numMethods) || (mtbl->methods[slot] == nullptr))
    throw std::bad_function_call();

  return mtbl->methods[slot];
}

} // namespace __zz_cib_

#  define __zz_cib_MethodTable_defined
#endif
