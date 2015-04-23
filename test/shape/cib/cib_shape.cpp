#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "shape.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry {
		namespace Shape {
			void __stdcall __delete(::Geometry::Shape* pShapeObj) {
				delete pShapeObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID___delete, (void*) __delete);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
