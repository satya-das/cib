#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "rect.h"

namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics {
		namespace Rectangle {
			::Graphics::Rectangle* __stdcall __new(float left, float top, float right, float bottom) {
				return new ::Graphics::Rectangle(left, top, right, bottom);
			}

			float __stdcall Area(::Graphics::Rectangle* pRectangleObj) {
				return pRectangleObj->::Graphics::Rectangle::Area();
			}

			float __stdcall Perimeter(::Graphics::Rectangle* pRectangleObj) {
				return pRectangleObj->::Graphics::Rectangle::Perimeter();
			}

			void __stdcall Draw(::Graphics::Rectangle* pRectangleObj, ::Graphics::Context* ctx) {
				pRectangleObj->::Graphics::Rectangle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __cast_to_Graphics__Shape(::Graphics::Rectangle* pRectangleObj) {
				return pRectangleObj;
			}

			class MetaInterface : public ::_cib_::GraphicsLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID___cast_to_Graphics__Shape, (void*) __cast_to_Graphics__Shape);
				}
			};
			::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
