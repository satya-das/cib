#include "cib_GraphicsLib.h"
#include "GraphicsLib_cibids.h"
#include <map>
#include <cstdint>

namespace _cib_ { namespace GraphicsLib {
   typedef std::map<std::uint32_t, ::_cib_::GraphicsLib::MetaInterface*> MetaInterfaceRepository;
   MetaInterfaceRepository gMetaInterfaceRepository; // This map is filled by InitMetaInterfaceRepository.
   void InitMetaInterfaceRepository();

   namespace CtoCpp {
      namespace MetaInterface {
         ::_cib_::GraphicsLib::MetaInterface* __stdcall GetMetaInterface(std::uint32_t classCibId)
         {
            if(classCibId == 0) // Requested an adhoc interface.
               return new ::_cib_::GraphicsLib::MetaInterface;
            if(gMetaInterfaceRepository.empty())
               InitMetaInterfaceRepository();
            return gMetaInterfaceRepository[classCibId];
         }

         void __stdcall AddMethod(::_cib_::GraphicsLib::MetaInterface* intrface, std::uint32_t funcCibId, void* proc)
         {
            intrface->AddMethod(funcCibId, proc);
         }

         void* __stdcall GetMethod(::_cib_::GraphicsLib::MetaInterface* intrface, std::uint32_t funcCibId)
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
extern "C" __declspec(dllexport) void* __stdcall cibGraphicsGetMetaInterfaceMethod(std::uint32_t methodId)
{
   switch(methodId)
   {
   case 0: return (void*) _cib_::GraphicsLib::CtoCpp::MetaInterface::GetMetaInterface;
   case 1: return (void*) _cib_::GraphicsLib::CtoCpp::MetaInterface::AddMethod;
   case 2: return (void*) _cib_::GraphicsLib::CtoCpp::MetaInterface::GetMethod;
   }
   return 0;
}

//////////////////////////////////////////////////////////////////////////

namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace Circle { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace Composite { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace Context { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace ContextLogger { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace Rectangle { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics { namespace Shape { ::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface(); }}
}}}

namespace _cib_ { namespace GraphicsLib {
	void InitMetaInterfaceRepository() {
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_Circle] = _cib_::GraphicsLib::CtoCpp::Graphics::Circle::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_Composite] = _cib_::GraphicsLib::CtoCpp::Graphics::Composite::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_Context] = _cib_::GraphicsLib::CtoCpp::Graphics::Context::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_ContextLogger] = _cib_::GraphicsLib::CtoCpp::Graphics::ContextLogger::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_Rectangle] = _cib_::GraphicsLib::CtoCpp::Graphics::Rectangle::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::GraphicsLib::Graphics::kCIBID_Shape] = _cib_::GraphicsLib::CtoCpp::Graphics::Shape::CreateMetaInterface();
	}
}}
