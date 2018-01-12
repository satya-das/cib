/////////////////////////////////////////////////////////////////////////////
// WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING //
// This file is generated by CIB and should not be edited.
// If CIB is run again the edited changes will go away forever.
/////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstdint>
#include <cstddef>

#ifndef __zz_cib_decl
# ifdef __GNUC__
#   define __zz_cib_decl __attribute__((stdcall))
# elif defined(_WIN32)
#   define __zz_cib_decl __stdcall
# endif
#endif

namespace __zz_cib_ {
  class PROXY;
  struct MethodTableHeader {
    size_t size; //!< sizeof(MethodTableHeader)
    size_t numMethods; //!< Number of methods in method table.
  };
  using MethodEntry = void(*)();
  using MethodTable = const MethodEntry*;

  MethodTable PerfTestLib_GetMethodTable(std::uint32_t classId);
}

