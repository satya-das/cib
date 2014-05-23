#include "cib.h"
#include "rect.h"

namespace _cib_ { namespace bind {
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

			class MetaInterface : public ::_cib_::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(60100, (void*) __new);
					AddMethod(60101, (void*) Area);
					AddMethod(60102, (void*) Perimeter);
					AddMethod(60103, (void*) Draw);
					AddMethod(60001, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}
