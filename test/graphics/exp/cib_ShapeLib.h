#ifndef __CIB_H__
#define __CIB_H__

#include <cstdint>

/**
 * Type of function that is provided by library.
 */
typedef void* (__stdcall *cibGetMetaInterfaceMethodProcType) (std::uint32_t methodId);
/**
 * Library provides a way to client to call cibGetMetaInterfaceMethod() API.
 * Client must define and initialize the value of cibGetMetaInterfaceMethodProc.
 */
extern cibGetMetaInterfaceMethodProcType cibGetMetaInterfaceMethodProc;

namespace _cib_ { namespace ShapeLib {
   class _h_MetaInterface;
   class MetaInterface
   {
   private:
      _h_MetaInterface* h_;
   public:
      MetaInterface(_h_MetaInterface* h) : h_(h) {}
      MetaInterface(std::uint32_t classCibId);
      static _h_MetaInterface* GetMetaInterface(std::uint32_t classCibId);
      void AddMethod(std::uint32_t funcCibId, void* proc);
      void* GetMethod(std::uint32_t funcCibId);
   };

   namespace bridge {
      struct MetaInterface {
         typedef _h_MetaInterface* (__stdcall *GetMetaInterfaceProc) (std::uint32_t classCibId);
         typedef void              (__stdcall *AddMethodProc)        (_h_MetaInterface* intrface, std::uint32_t funcCibId, void* proc);
         typedef void*             (__stdcall *GetMethodProc)        (_h_MetaInterface* intrface, std::uint32_t funcCibId);

         GetMetaInterfaceProc  GetMetaInterface;
         AddMethodProc         AddMethod;
         GetMethodProc         GetMethod;

         static const MetaInterface& instance() {
            static MetaInterface bridgeIns;
            return bridgeIns;
         }
      private:
         MetaInterface() {
            GetMetaInterface    = (GetMetaInterfaceProc)  cibGetMetaInterfaceMethodProc(0);
            AddMethod           = (AddMethodProc)         cibGetMetaInterfaceMethodProc(1);
            GetMethod           = (GetMethodProc)         cibGetMetaInterfaceMethodProc(2);
         }
      };
   }

   inline MetaInterface::MetaInterface(std::uint32_t classCibId)
      :h_(GetMetaInterface(classCibId))
   {
   }

   inline _h_MetaInterface* MetaInterface::GetMetaInterface(std::uint32_t classCibId)
   {
      return bridge::MetaInterface::instance().GetMetaInterface(classCibId);
   }

   inline void MetaInterface::AddMethod(std::uint32_t funcCibId, void* proc)
   {
      bridge::MetaInterface::instance().AddMethod(h_, funcCibId, proc);
   }

   inline void* MetaInterface::GetMethod(std::uint32_t funcCibId)
   {
      return bridge::MetaInterface::instance().GetMethod(h_, funcCibId);
   }
}}

#endif //#ifndef __CIB_H__
