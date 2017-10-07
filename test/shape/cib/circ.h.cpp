#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "circ.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Graphics {
		namespace Circle {
			::Graphics::Circle* __stdcall __new(float Ox, float Oy, float radius) {
				return new ::Graphics::Circle(Ox, Oy, radius);
			}

			float __stdcall Area(::Graphics::Circle* pCircleObj) {
				return pCircleObj->::Graphics::Circle::Area();
			}

			float __stdcall Perimeter(::Graphics::Circle* pCircleObj) {
				return pCircleObj->::Graphics::Circle::Perimeter();
			}

			void __stdcall Draw(::Graphics::Circle* pCircleObj, ::Graphics::Context* ctx) {
				pCircleObj->::Graphics::Circle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __cast_to_Graphics__Shape(::Graphics::Circle* pCircleObj) {
				return pCircleObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID___cast_to_Graphics__Shape, (void*) __cast_to_Graphics__Shape);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
