/**
 * @file This file contains helper functions for dealing with smart pointer types.
 * For example if there is any object that manages reference count
 * internally and are used by a smart pointer then CIB needs to
 * know the type of that object and smart pointer for effectively
 * managing object's lifecycle across DLL boundary.
 */

/**
 * Namespace that contains inputs needed by CIB.
 * @note This namespace doesn't become part of any glue code.
 * Name of this namespace must be exactly __zz_cib_cibinput.
 */
namespace __zz_cib_cibinput {
/**
 * Contains information about intrusive pointer types and smart pointer
 * that handles those intrusively managed reference count objects.
 * There can be multiple namespaces with name same as __zz_cib_IntrusivePtrInfo
 * if there are multiple kind of smart pointers that manage disparate set of
 * different kind of intrusive objects.
 */
namespace __zz_cib_IntrusivePtrInfo {
/**
 * The smart pointer type (possibly a template class).
 * This is the way to tell CIB what is the smart pointer
 * that is used to manage objects that keeps reference
 * count internally (aka intrusively).
 *
 * *** Replace __zz_cib_SmartPtr with the name of template class of your library.
 */
template <typename T>
using __zz_cib_IntrusivePointerHandler = __zz_cib_SmartPtr<T>;

/**
 * Contains list of all classes that manages reference counts intrusively.
 * Name of this namespace must be exactly __zz_cib_IntrusivePointerTypes.
 */
namespace __zz_cib_IntrusivePointerTypes {
// It can also be specified in a separate file that is #include'd from here.
// The format has to be:
//      using <class-name> = <full-class-name>;
using IntrusivePtrBase = ::IntrusivePtrBase;
using IntrusiveObjTest = ::IntrusiveObjTest;
} // namespace __zz_cib_IntrusivePointerTypes
} // namespace __zz_cib_IntrusivePtrInfo
} // namespace __zz_cib_cibinput

/**
 * This namespace becomes part of library as well as client glue code.
 * Methods in this namespace can be modified to fix compilation error.
 */
namespace __zz_cib_ {
/*
 * Contains helper methods to deal with intrusive pointers.
 * Name of this namespace must be exactly __zz_cib_IntrusivePtrHelper.
 */
namespace __zz_cib_IntrusivePtrHelper {
/**
 * Helper method to get raw pointer from intrusive smart pointer.
 * @param smartPtr Smart pointer object.
 * @return Raw pointer held by given smart pointer.

 * @remarks If you have multiple smatrt pointers to deal with different
 * kind of intrusive pointers then you can have multiple overloads
 * of this method to cater with different kind of smart pointers.
 */
template <typename _IntrusiveSmartPointer, typename _ObjectType>
inline _ObjectType* GetRawPointer(const _IntrusiveSmartPointer& smartPtr)
{
  // README: If you get compilation error in below code then please fix it.
  return smartPtr.get();
}

/**
 * Helper method to detach raw pointer from intrusive smart pointer.
 * @param smartPtr Smart pointer object.
 * @return Raw pointer held by given smart pointer.
 * @note
 *      1. The default implementation is such that it can work for all
 *      cases. Please modify it appropriately if there is a need, eg. if
 *      there is a compilation error.
 *      2. The default implementation leaves the object with increased
 *      reference count. It assumes that default Attach() will be used
 *      on the raw pointer.
 */
template <typename _IntrusiveSmartPointer, typename _ObjectType>
inline _ObjectType* Detach(_IntrusiveSmartPointer& smartPtr)
{
  auto obj = GetRawPointer(smartPtr);
  // README: If you get compilation error in below code then please fix it.
  if (obj)
    obj->AddRef();

  return obj;
}

/**
 * Helper method to attach raw pointer to intrusive smart pointer.
 * @param smartPtr Smart pointer object.
 * @param Raw pointer that will be held by given smart pointer.
 * @note
 *      1. The default implementation is such that it can work for all
 *      cases. Please modify it appropriately if there is a need, eg. if
 *      there is a compilation error.
 *      2. The default implementation decreases the  reference count.
 *      It assumes that default Detach() was used to get the raw pointer.
 */
template <typename _IntrusiveSmartPointer, typename _ObjectType>
inline _IntrusiveSmartPointer Attach(_ObjectType* obj)
{
  _IntrusiveSmartPointer smartPtr = obj;
  // README: If you get compilation error in below code then please fix it.
  if (obj)
    obj->Release();
}
} // namespace __zz_cib_IntrusivePtrHelper
} // namespace __zz_cib_
