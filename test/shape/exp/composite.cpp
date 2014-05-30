#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "composite.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Geometry::Composite::Composite() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Geometry::kCIBID_Composite);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID___new);
		Add = (AddProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Add);
		NumShapes = (NumShapesProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_NumShapes);
		ShapeAt = (ShapeAtProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_ShapeAt);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_Draw);
		CreateCompositeOfRectAndCircle = (CreateCompositeOfRectAndCircleProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID_CreateCompositeOfRectAndCircle);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Composite::kCIBID___cast_to_Geometry__Shape);
	}
}}
