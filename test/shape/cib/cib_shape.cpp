#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "shape.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
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

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID___delete, (void*) __delete);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
