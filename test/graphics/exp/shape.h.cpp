#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "shape.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::Shape::Shape() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_Shape);
		__delete = (__deleteProc) metaIntrface.GetMethod(::_cib_::GraphicsLib::Graphics::Shape::kCIBID___delete);
	}
}}
