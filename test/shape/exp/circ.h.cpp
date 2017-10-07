#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "circ.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Graphics::Circle::Circle() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Graphics::kCIBID_Circle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID_Draw);
		__cast_to_Graphics__Shape = (__cast_to_Graphics__ShapeProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Circle::kCIBID___cast_to_Graphics__Shape);
	}
}}
