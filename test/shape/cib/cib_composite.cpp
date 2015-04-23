#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "composite.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Geometry {
		namespace Composite {
			::Geometry::Composite* __stdcall __new() {
				return new ::Geometry::Composite();
			}

			void __stdcall Add(::Geometry::Composite* pCompositeObj, ::Geometry::Shape* shape) {
				pCompositeObj->::Geometry::Composite::Add(shape);
			}

			size_t __stdcall NumShapes(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->::Geometry::Composite::NumShapes();
			}

			::Geometry::Shape* __stdcall ShapeAt(::Geometry::Composite* pCompositeObj, size_t idxShape) {
				return pCompositeObj->::Geometry::Composite::ShapeAt(idxShape);
			}

			double __stdcall Area(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->::Geometry::Composite::Area();
			}

			double __stdcall Perimeter(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->::Geometry::Composite::Perimeter();
			}

			void __stdcall Draw(::Geometry::Composite* pCompositeObj, HDC hdc) {
				pCompositeObj->::Geometry::Composite::Draw(hdc);
			}

			::Geometry::Composite* __stdcall CreateCompositeOfRectAndCircle() {
				return ::Geometry::Composite::CreateCompositeOfRectAndCircle();
			}

			::Geometry::Shape* __stdcall __cast_to_Geometry__Shape(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj;
			}

			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID___new, (void*) __new);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Add, (void*) Add);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_NumShapes, (void*) NumShapes);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_ShapeAt, (void*) ShapeAt);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Area, (void*) Area);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Perimeter, (void*) Perimeter);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Draw, (void*) Draw);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_CreateCompositeOfRectAndCircle, (void*) CreateCompositeOfRectAndCircle);
					AddMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID___cast_to_Geometry__Shape, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
