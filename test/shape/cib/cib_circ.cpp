#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "circ.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry {
		namespace Circle {
			::Geometry::Circle* __stdcall __new(int Ox, int Oy, int radius) {
				return new ::Geometry::Circle(Ox, Oy, radius);
			}

			double __stdcall Area(::Geometry::Circle* pCircleObj) {
				return pCircleObj->::Geometry::Circle::Area();
			}

			double __stdcall Perimeter(::Geometry::Circle* pCircleObj) {
				return pCircleObj->::Geometry::Circle::Perimeter();
			}

			void __stdcall Draw(::Geometry::Circle* pCircleObj, HDC hdc) {
				pCircleObj->::Geometry::Circle::Draw(hdc);
			}

			::Geometry::Shape* __stdcall __cast_to_Geometry__Shape(::Geometry::Circle* pCircleObj) {
				return pCircleObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID___cast_to_Geometry__Shape, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
