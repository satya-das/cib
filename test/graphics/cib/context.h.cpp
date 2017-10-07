#include "GraphicsLib_cibids.h"

#include "cib_GraphicsLib.h"
#include "context.h"

namespace _cib_ { namespace GraphicsLib { namespace CtoCpp {
	namespace Graphics {
		namespace Context {
			class MetaInterface : public ::_cib_::GraphicsLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
				}
			};
			::_cib_::GraphicsLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
