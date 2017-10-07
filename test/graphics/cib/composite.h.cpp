#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "composite.h"

namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics {
		namespace Composite {
			::Graphics::Composite* __stdcall __new() {
				return new ::Graphics::Composite();
			}

			void __stdcall Add(::Graphics::Composite* pCompositeObj, ::Graphics::Shape* shape) {
				pCompositeObj->::Graphics::Composite::Add(shape);
			}

			size_t __stdcall NumShapes(::Graphics::Composite* pCompositeObj) {
				return pCompositeObj->::Graphics::Composite::NumShapes();
			}

			::Graphics::Shape* __stdcall ShapeAt(::Graphics::Composite* pCompositeObj, size_t idxShape) {
				return pCompositeObj->::Graphics::Composite::ShapeAt(idxShape);
			}

			float __stdcall Area(::Graphics::Composite* pCompositeObj) {
				return pCompositeObj->::Graphics::Composite::Area();
			}

			float __stdcall Perimeter(::Graphics::Composite* pCompositeObj) {
				return pCompositeObj->::Graphics::Composite::Perimeter();
			}

			void __stdcall Draw(::Graphics::Composite* pCompositeObj, ::Graphics::Context* ctx) {
				pCompositeObj->::Graphics::Composite::Draw(ctx);
			}

			::Graphics::Composite* __stdcall CreateCompositeOfRectAndCircle() {
				return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
			}

			::Graphics::Shape* __stdcall __cast_to_Graphics__Shape(::Graphics::Composite* pCompositeObj) {
				return pCompositeObj;
			}

			class MetaInterface : public ::_cib_::GraphicsLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Add, (void*) Add);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_NumShapes, (void*) NumShapes);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_ShapeAt, (void*) ShapeAt);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID_CreateCompositeOfRectAndCircle, (void*) CreateCompositeOfRectAndCircle);
					AddMethod(::_cib_::GraphicsLib::Graphics::Composite::kCIBID___cast_to_Graphics__Shape, (void*) __cast_to_Graphics__Shape);
				}
			};
			::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
