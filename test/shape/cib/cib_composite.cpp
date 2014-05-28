#include "cib_ShapeLib.h"
#include "composite.h"

namespace _cib_ { namespace Shape { namespace CtoCpp {
	namespace Geometry {
		namespace Composite {
			::Geometry::Composite* __stdcall __new() {
				return new ::Geometry::Composite();
			}

			void __stdcall Add(::Geometry::Composite* pCompositeObj, ::Geometry::Shape* shape) {
				pCompositeObj->Add(shape);
			}

			size_t __stdcall NumShapes(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->NumShapes();
			}

			::Geometry::Shape* __stdcall ShapeAt(::Geometry::Composite* pCompositeObj, size_t idxShape) {
				return pCompositeObj->ShapeAt(idxShape);
			}

			double __stdcall Area(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->Area();
			}

			double __stdcall Perimeter(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj->Perimeter();
			}

			void __stdcall Draw(::Geometry::Composite* pCompositeObj, HDC hdc) {
				pCompositeObj->Draw(hdc);
			}

			::Geometry::Composite* __stdcall CreateCompositeOfRectAndCircle() {
				return ::Geometry::Composite::CreateCompositeOfRectAndCircle();
			}

			::Geometry::Shape* __stdcall __cast_to_Geometry__Shape(::Geometry::Composite* pCompositeObj) {
				return pCompositeObj;
			}

			class MetaInterface : public ::_cib_::Shape::MetaInterface {
			protected:
				virtual void LoadMethods() {
					AddMethod(40100, (void*) __new);
					AddMethod(40101, (void*) Add);
					AddMethod(40102, (void*) NumShapes);
					AddMethod(40103, (void*) ShapeAt);
					AddMethod(40104, (void*) Area);
					AddMethod(40105, (void*) Perimeter);
					AddMethod(40106, (void*) Draw);
					AddMethod(40107, (void*) CreateCompositeOfRectAndCircle);
					AddMethod(40001, (void*) __cast_to_Geometry__Shape);
				}
			};
			::_cib_::Shape::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
