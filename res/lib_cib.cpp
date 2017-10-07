#include "cib_$MODULE$Lib.h"
#include "$CIBIDHDR$"
#include <map>
#include <cstdint>

namespace _cib_ { namespace $MODULE$Lib {
   typedef std::map<std::uint32_t, ::_cib_::$MODULE$Lib::MetaInterface*> MetaInterfaceRepository;
   MetaInterfaceRepository gMetaInterfaceRepository; // This map is filled by InitMetaInterfaceRepository.
   void InitMetaInterfaceRepository();

   namespace CtoCpp {
      namespace MetaInterface {
         ::_cib_::$MODULE$Lib::MetaInterface* __stdcall GetMetaInterface(std::uint32_t classCibId)
         {
            if(classCibId == 0) // Requested an adhoc interface.
               return new ::_cib_::$MODULE$Lib::MetaInterface;
            if(gMetaInterfaceRepository.empty())
               InitMetaInterfaceRepository();
            return gMetaInterfaceRepository[classCibId];
         }

         void __stdcall AddMethod(::_cib_::$MODULE$Lib::MetaInterface* intrface, std::uint32_t funcCibId, void* proc)
         {
            intrface->AddMethod(funcCibId, proc);
         }

         void* __stdcall GetMethod(::_cib_::$MODULE$Lib::MetaInterface* intrface, std::uint32_t funcCibId)
         {
            return intrface->GetMethod(funcCibId);
         }
      }
   }
}}

/**
 * Returns address of above declared APIs
 * This library must have a way to let client call this API
 * This is kind of a hook that client needs to use all methods and classes that this library wants to expose.
 */
extern "C" $CIBEXPAPI$ void* __stdcall cib$MODULE$GetMetaInterfaceMethod(std::uint32_t methodId)
{
   switch(methodId)
   {
   case 0: return (void*) _cib_::$MODULE$Lib::CtoCpp::MetaInterface::GetMetaInterface;
   case 1: return (void*) _cib_::$MODULE$Lib::CtoCpp::MetaInterface::AddMethod;
   case 2: return (void*) _cib_::$MODULE$Lib::CtoCpp::MetaInterface::GetMethod;
   }
   return 0;
}

//////////////////////////////////////////////////////////////////////////
