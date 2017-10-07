#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::Circle::Circle() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_Circle);
		__new = (__newProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Circle::kCIBID___new);
		Area = (AreaProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Circle::kCIBID_Area);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Circle::kCIBID_Perimeter);
		Draw = (DrawProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Circle::kCIBID_Draw);
		__cast_to_Graphics__Shape = (__cast_to_Graphics__ShapeProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Circle::kCIBID___cast_to_Graphics__Shape);
	}
}}
