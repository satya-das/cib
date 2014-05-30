#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "rect.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry {
		namespace Rectangle {
			::Geometry::Rectangle* __stdcall __new(int left, int top, int right, int bottom) {
				return new ::Geometry::Rectangle(left, top, right, bottom);
			}

			double __stdcall Area(::Geometry::Rectangle* pRectangleObj) {
				return pRectangleObj->Area();
			}

			double __stdcall Perimeter(::Geometry::Rectangle* pRectangleObj) {
				return pRectangleObj->Perimeter();
			}

			void __stdcall Draw(::Geometry::Rectangle* pRectangleObj, HDC hdc) {
				pRectangleObj->Draw(hdc);
			}

			::Geometry::Shape* __stdcall __cast_to_Geometry__Shape(::Geometry::Rectangle* pRectangleObj) {
				return pRectangleObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID___cast_to_Geometry__Shape, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
