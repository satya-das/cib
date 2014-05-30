#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "shape.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Geometry::Shape::Shape() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Geometry::kCIBID_Shape);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID_Draw);
		__delete = (__deleteProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Shape::kCIBID___delete);
	}
}}
