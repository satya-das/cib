#include "cib_ShapeLib.h"
#include <map>

namespace _cib_ { namespace Shape {
   typedef std::map<int, ::_cib_::Shape::MetaInterface*> MetaInterfaceRepository;
   MetaInterfaceRepository gMetaInterfaceRepository; // This map is filled by InitMetaInterfaceRepository.
   void InitMetaInterfaceRepository();

   namespace CtoCpp {
      namespace MetaInterface {
         ::_cib_::Shape::MetaInterface* __stdcall GetMetaInterface(int classCibId)
         {
            if(classCibId == 0) // Requested an adhoc interface.
               return new ::_cib_::Shape::MetaInterface;
            if(gMetaInterfaceRepository.empty())
               InitMetaInterfaceRepository();
            return gMetaInterfaceRepository[classCibId];
         }

         void __stdcall AddMethod(::_cib_::Shape::MetaInterface* intrface, int funcCibId, void* proc)
         {
            intrface->AddMethod(funcCibId, proc);
         }

         void* __stdcall GetMethod(::_cib_::Shape::MetaInterface* intrface, int funcCibId)
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
extern "C" __declspec(dllexport) void* __stdcall cibShapeGetMetaInterfaceMethod(char methodId)
{
   switch(methodId)
   {
   case 0: return (void*) _cib_::Shape::CtoCpp::MetaInterface::GetMetaInterface;
   case 1: return (void*) _cib_::Shape::CtoCpp::MetaInterface::AddMethod;
   case 2: return (void*) _cib_::Shape::CtoCpp::MetaInterface::GetMethod;
   }
   return 0;
}

//////////////////////////////////////////////////////////////////////////

namespace _cib_ { namespace Shape { namespace CtoCpp {
	namespace Geometry { namespace Circle { ::_cib_::Shape::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace Shape { namespace CtoCpp {
	namespace Geometry { namespace Composite { ::_cib_::Shape::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace Shape { namespace CtoCpp {
	namespace Geometry { namespace Rectangle { ::_cib_::Shape::MetaInterface* CreateMetaInterface(); }}
}}}
namespace _cib_ { namespace Shape { namespace CtoCpp {
	namespace Geometry { namespace Shape { ::_cib_::Shape::MetaInterface* CreateMetaInterface(); }}
}}}

namespace _cib_ { namespace Shape {
	void InitMetaInterfaceRepository() {
		gMetaInterfaceRepository[20000] = _cib_::Shape::CtoCpp::Geometry::Circle::CreateMetaInterface();
		gMetaInterfaceRepository[40000] = _cib_::Shape::CtoCpp::Geometry::Composite::CreateMetaInterface();
		gMetaInterfaceRepository[60000] = _cib_::Shape::CtoCpp::Geometry::Rectangle::CreateMetaInterface();
		gMetaInterfaceRepository[80000] = _cib_::Shape::CtoCpp::Geometry::Shape::CreateMetaInterface();
	}
}}
