#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "rect.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::Rectangle::Rectangle() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_Rectangle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID_Draw);
		__cast_to_Graphics__Shape = (__cast_to_Graphics__ShapeProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Rectangle::kCIBID___cast_to_Graphics__Shape);
	}
}}
