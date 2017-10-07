#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "context.h"

namespace _cib_ { namespace GraphicsLib {
	CppToC::Graphics::Context::Context() {
		_cib_::GraphicsLib::MetaInterface metaIntrface(::_cib_::GraphicsLib::Graphics::kCIBID_Context);
	}
}}
