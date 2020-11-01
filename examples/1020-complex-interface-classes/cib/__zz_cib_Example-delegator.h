/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

namespace __zz_cib_ {

/**
 * __zz_cib_Delegator should be specialized for classes that need to export MethodTables.
 * For example all library classes that need to be exported from library should have secialization of
 * __zz_cib_Delegator. Also, all interface classes should have specialization of __zz_cib_Delegator on client side as
 * well.
 */
template <typename _ProxyClass>
struct __zz_cib_Delegator
{
};

} // namespace __zz_cib_
