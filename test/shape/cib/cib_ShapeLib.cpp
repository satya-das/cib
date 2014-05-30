#include "cib_ShapeLib.h"
#include "ShapeLib_cibids.h"
#include <map>

namespace _cib_ { namespace ShapeLib {
   typedef std::map<int, ::_cib_::ShapeLib::MetaInterface*> MetaInterfaceRepository;
   MetaInterfaceRepository gMetaInterfaceRepository; // This map is filled by InitMetaInterfaceRepository.
   void InitMetaInterfaceRepository();

   namespace CtoCpp {
      namespace MetaInterface {
         ::_cib_::ShapeLib::MetaInterface* __stdcall GetMetaInterface(int classCibId)
         {
            if(classCibId == 0) // Requested an adhoc interface.
               return new ::_cib_::ShapeLib::MetaInterface;
            if(gMetaInterfaceRepository.empty())
               InitMetaInterfaceRepository();
            return gMetaInterfaceRepository[classCibId];
         }

         void __stdcall AddMethod(::_cib_::ShapeLib::MetaInterface* intrface, int funcCibId, void* proc)
         {
            intrface->AddMethod(funcCibId, proc);
         }

         void* __stdcall GetMethod(::_cib_::ShapeLib::MetaInterface* intrface, int funcCibId)
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
extern "C" __declspec(dllexport) void* __stdcall cibShapeGetMetaInterfaceMethod(int methodId)
{
   switch(methodId)
   {
   case 0: return (void*) _cib_::ShapeLib::CtoCpp::MetaInterface::GetMetaInterface;
   case 1: return (void*) _cib_::ShapeLib::CtoCpp::MetaInterface::AddMethod;
   case 2: return (void*) _cib_::ShapeLib::CtoCpp::MetaInterface::GetMethod;
   }
   return 0;
}

//////////////////////////////////////////////////////////////////////////

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry { namespace Circle { ::_cib_::ShapeLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry { namespace Composite { ::_cib_::ShapeLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry { namespace Rectangle { ::_cib_::ShapeLib::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry { namespace Shape { ::_cib_::ShapeLib::MetaInterface* CreateMetaInterface(); }}
}}}

namespace _cib_ { namespace ShapeLib {
	void InitMetaInterfaceRepository() {
		gMetaInterfaceRepository[::_cib_::ShapeLib::Geometry::kCIBID_Circle] = _cib_::ShapeLib::CtoCpp::Geometry::Circle::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::ShapeLib::Geometry::kCIBID_Composite] = _cib_::ShapeLib::CtoCpp::Geometry::Composite::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::ShapeLib::Geometry::kCIBID_Rectangle] = _cib_::ShapeLib::CtoCpp::Geometry::Rectangle::CreateMetaInterface();
		gMetaInterfaceRepository[::_cib_::ShapeLib::Geometry::kCIBID_Shape] = _cib_::ShapeLib::CtoCpp::Geometry::Shape::CreateMetaInterface();
	}
}}
