#include "cib.h"
#include "circ.h"

namespace _cib_ { namespace bind {
	namespace Geometry {
		namespace Circle {
			::Geometry::Circle* __stdcall __new(int Ox, int Oy, int radius) {
				return new ::Geometry::Circle(Ox, Oy, radius);
			}

			double __stdcall Area(::Geometry::Circle* pCircleObj) {
				return pCircleObj->Area();
			}

			double __stdcall Perimeter(::Geometry::Circle* pCircleObj) {
				return pCircleObj->Perimeter();
			}

			void __stdcall Draw(::Geometry::Circle* pCircleObj, HDC hdc) {
				pCircleObj->Draw(hdc);
			}

			::Geometry::Shape* __stdcall __cast_to_Geometry__Shape(::Geometry::Circle* pCircleObj) {
				return pCircleObj;
			}

			class MetaInterface : public ::_cib_::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(20100, (void*) __new);
					AddMethod(20101, (void*) Area);
					AddMethod(20102, (void*) Perimeter);
					AddMethod(20103, (void*) Draw);
					AddMethod(20001, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}
