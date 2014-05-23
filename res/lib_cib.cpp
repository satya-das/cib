#include "cib.h"
#include <map>

namespace _cib_ {
   typedef std::map<int, ::_cib_::MetaInterface*> MetaInterfaceRepository;
   MetaInterfaceRepository gMetaInterfaceRepository; // This map is filled by InitMetaInterfaceRepository.
   void InitMetaInterfaceRepository();

   namespace bind {
      namespace MetaInterface {
         ::_cib_::MetaInterface* __stdcall GetMetaInterface(int classCibId)
         {
            if(classCibId == 0) // Requested an adhoc interface.
               return new ::_cib_::MetaInterface;
            if(gMetaInterfaceRepository.empty())
               InitMetaInterfaceRepository();
            return gMetaInterfaceRepository[classCibId];
         }

         void __stdcall AddMethod(::_cib_::MetaInterface* intrface, int funcCibId, void* proc)
         {
            intrface->AddMethod(funcCibId, proc);
         }

         void* __stdcall GetMethod(::_cib_::MetaInterface* intrface, int funcCibId)
         {
            return intrface->GetMethod(funcCibId);
         }
      }
   }
}

/**
 * Returns address of above declared APIs
 * This library must have a way to let client call this API
 * This is kind of a hook that client needs to use all methods and classes that this library wants to expose.
 */
extern "C" void* __stdcall cibGetMetaInterfaceMethod(char methodId)
{
   switch(methodId)
   {
   case 0: return (void*) _cib_::bind::MetaInterface::GetMetaInterface;
   case 1: return (void*) _cib_::bind::MetaInterface::AddMethod;
   case 2: return (void*) _cib_::bind::MetaInterface::GetMethod;
   }
   return 0;
}

//////////////////////////////////////////////////////////////////////////
