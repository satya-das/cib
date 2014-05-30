#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "circ.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Geometry::Circle::Circle() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Geometry::kCIBID_Circle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID_Draw);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Circle::kCIBID___cast_to_Geometry__Shape);
	}
}}
