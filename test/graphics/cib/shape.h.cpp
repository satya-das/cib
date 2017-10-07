#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "shape.h"

namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics {
		namespace Shape {
			void __stdcall __delete(::Graphics::Shape* pShapeObj) {
				delete pShapeObj;
			}

			class MetaInterface : public ::_cib_::GraphicsLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::GraphicsLib::Graphics::Shape::kCIBID___delete, (void*) __delete);
				}
			};
			::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
