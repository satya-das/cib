#include "ShapeLib_cibids.h"

#include "cib_ShapeLib.h"
#include "context.h"

namespace _cib_ { namespace ShapeLib { namespace CtoCpp {
	namespace Graphics {
		namespace Context {
			class MetaInterface : public ::_cib_::ShapeLib::MetaInterface {
			protected:
				virtual void LoadMethods() {
				}
			};
			::_cib_::ShapeLib::MetaInterface* CreateMetaInterface() { return new MetaInterface(); }
		}
	}
}}}
