#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "context.h"

namespace _cib_ { namespace ShapeLib {
	CppToC::Graphics::Context::Context() {
		_cib_::ShapeLib::MetaInterface metaIntrface(::_cib_::ShapeLib::Graphics::kCIBID_Context);
	}
}}
