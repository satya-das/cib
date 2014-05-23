#include "cib.h"
#include "shape.h"

namespace _cib_ { namespace bind {
	namespace Geometry {
		namespace Shape {
			double __stdcall Area(::Geometry::Shape* pShapeObj) {
				return pShapeObj->Area();
			}

			double __stdcall Perimeter(::Geometry::Shape* pShapeObj) {
				return pShapeObj->Perimeter();
			}

			void __stdcall Draw(::Geometry::Shape* pShapeObj, HDC hdc) {
				pShapeObj->Draw(hdc);
			}

			void __stdcall __delete(::Geometry::Shape* pShapeObj) {
				delete pShapeObj;
			}

			class MetaInterface : public ::_cib_::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(80100, (void*) Area);
					AddMethod(80101, (void*) Perimeter);
					AddMethod(80102, (void*) Draw);
					AddMethod(80103, (void*) __delete);
				}
			};
			::_cib_::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}
