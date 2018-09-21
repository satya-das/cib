#ifndef __zz_cib_MethodTable_defined

#  include <cassert>
#  include <cstdint>
#  include <functional>

namespace __zz_cib_ {

//! Contains information about method table.
struct __zz_cib_MethodTableHeader
{
  std::uint32_t size;       //!< sizeof(__zz_cib_MethodTableHeader)
  std::uint32_t numMethods; //!< Number of methods in method table.
};

//! Generic type for function pointer.
using __zz_cib_MethodEntry = void (*)();

//! Method table which is array of __zz_cib_MethodEntry.
//! @note The very first element in the table must be a
//! pointer to __zz_cib_MethodTableHeader.
using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;

//! Fetches method from a method table
//! @param mtbl Method table from which to fetch the method.
//! @param slot Index at which to fetch method from.
//! @return __zz_cib_MethodEntry value which is guarenteed to be non-null.
//! @note Will throw std::bad_function_call() if method table doesn't contain
//! method or the fetched method is null.
inline __zz_cib_MethodEntry __zz_cib_GetMethodEntry(__zz_cib_MethodTable mtbl,
                                                    std::uint32_t        slot)
{
  assert(slot > 0);
  auto mtblHeader =
    reinterpret_cast<const __zz_cib_MethodTableHeader*>(mtbl[0]);
  if ((slot > mtblHeader->numMethods) || (mtbl[slot] == nullptr))
    throw std::bad_function_call();

  return mtbl[slot];
}

} // namespace __zz_cib_

#  define __zz_cib_MethodTable_defined
#endif
