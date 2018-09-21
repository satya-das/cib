#ifndef __zz_cib_MethodTable_defined

#  include <cstddef>
#  include <cstdint>
#  include <functional>

namespace __zz_cib_ {

using __zz_cib_MethodEntry = void (*)();
using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;

//! Pointer of __zz_cib_MethodTableHeader is the first item in
//! __zz_cib_MethodTable
struct __zz_cib_MethodTableHeader
{
  std::uint32_t size;       //!< sizeof(__zz_cib_MethodTableHeader)
  std::uint32_t numMethods; //!< Number of methods in method table.
};

inline __zz_cib_MethodEntry __zz_cib_GetMethodEntry(__zz_cib_MethodTable mtbl,
                                                    std::uint32_t        slot)
{
  auto mtblHeader =
    reinterpret_cast<const __zz_cib_MethodTableHeader*>(mtbl[0]);
  if ((slot > mtblHeader->numMethods) || (mtbl[slot] == nullptr))
    throw std::bad_function_call();

  return mtbl[slot];
}

} // namespace __zz_cib_

#  define __zz_cib_MethodTable_defined
#endif
