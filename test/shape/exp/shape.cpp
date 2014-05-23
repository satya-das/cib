#include "cib.h"
#include "shape.h"

namespace _cib_ {
	bridge::Geometry::Shape::Shape() {
		_cib_::MetaInterface metaIntrface(80000);
		Area = (AreaProc) metaIntrface.GetMethod(80100);
		Perimeter = (PerimeterProc) metaIntrface.GetMethod(80101);
		Draw = (DrawProc) metaIntrface.GetMethod(80102);
		__delete = (__deleteProc) metaIntrface.GetMethod(80103);
	}
}
