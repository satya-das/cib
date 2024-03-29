#ifndef __zz_cib_MethodTableHelper_defined
#define __zz_cib_MethodTableHelper_defined

#include "__zz_cib_wxStyleHeaderDependencyTests-mtable.h"

#include <cassert>
#include <functional>

namespace __zz_cib_ {

//! Helps in using MethodTable.
class __zz_cib_MethodTableHelper
{
public:
  __zz_cib_MethodTableHelper(const __zz_cib_MethodTable* _mtbl)
    : mtbl(_mtbl)
  {
  }
  //! Invokes function by fetching it from MethodTable using index value of method.
  //! @tparam _MethodType Prototype of function that is present at given index.
  //! @tparam methodId Id of the method to invoke, it is actualy the index at which the function is present in the
  //! MethodTable.
  //! @tparam _TArgs All parameters that have to be passed to the function getting invoked.
  //! @note Throws std::bad_function_call() if MethodTable doesn't contain
  //! method at specified index or the fetched method is null.
  template <typename _MethodType, std::uint32_t methodId, typename... _TArgs>
  auto Invoke(_TArgs... args) const
  {
    auto method = GetMethod<_MethodType>(methodId);
    if (method == nullptr)
#ifndef __ZZ_CIB_NO_EXCEPTION
      throw std::bad_function_call();
#else
      assert(false && "Bad function call");
#endif
    return method(args...);
  }

private:
  //! Utility method to get method from MethodTable.
  //! @param methodId ID for which method has to be fetched.
  //! @return Method of type specified as template parameter.
  //! @warning returned value can be a nullptr.
  template <typename _MethodType>
  _MethodType GetMethod(std::uint32_t methodId) const
  {
    return reinterpret_cast<_MethodType>(__zz_cib_GetMTableEntry(mtbl, methodId));
  }

private:
  const __zz_cib_MethodTable* const mtbl;
};

} // namespace __zz_cib_

#endif
