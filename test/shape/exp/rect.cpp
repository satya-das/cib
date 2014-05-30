#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "rect.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Geometry::Rectangle::Rectangle() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Geometry::kCIBID_Rectangle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID_Draw);
		__cast_to_Geometry__Shape = (__cast_to_Geometry__ShapeProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Geometry::Rectangle::kCIBID___cast_to_Geometry__Shape);
	}
}}
