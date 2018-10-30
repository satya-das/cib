#ifndef __zz_cib_MethodTable_defined

#  include "__zz_cib_Example-decl.h"

#  include <cassert>
#  include <cstdint>

namespace __zz_cib_ {

//! Generic type for function pointer.
using __zz_cib_MTableEntry = int(__zz_cib_decl*)();
using __zz_cib_MethodArray = const __zz_cib_MTableEntry*;

extern "C" struct __zz_cib_MethodTable
{
  const __zz_cib_MethodArray methods;
  const std::uint32_t        numMethods; //!< Number of methods in method table.
};

//! Fetches method from a method table
//! @param mtbl Method table from which to fetch the method.
//! @param slot Index at which to fetch method from.
//! @return __zz_cib_MTableEntry value which can be null.
//! @warning returned value can be a nullptr.
inline __zz_cib_MTableEntry __zz_cib_GetMTableEntry(const __zz_cib_MethodTable* mtbl, std::uint32_t slot)
{
  if (slot >= mtbl->numMethods)
    return nullptr;

  return mtbl->methods[slot];
}

} // namespace __zz_cib_

#  define __zz_cib_MethodTable_defined
#endif