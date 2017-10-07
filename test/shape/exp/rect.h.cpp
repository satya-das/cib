#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "rect.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Graphics::Rectangle::Rectangle() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Graphics::kCIBID_Rectangle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Rectangle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Rectangle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Rectangle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Rectangle::kCIBID_Draw);
		__cast_to_Graphics__Shape = (__cast_to_Graphics__ShapeProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Rectangle::kCIBID___cast_to_Graphics__Shape);
	}
}}
