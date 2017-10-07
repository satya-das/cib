#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "shape.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Graphics::Shape::Shape() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Graphics::kCIBID_Shape);
		__delete = (__deleteProc) metaIntrface.GetMethod(::_cib_::ShapeLib::Graphics::Shape::kCIBID___delete);
	}
}}
