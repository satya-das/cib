#include "cib/cib_GraphicsLib.h"

#if defined _WIN32 || defined __CYGWIN__
    #ifdef __GNUC__
      #define __zz_cib_public __attribute__ ((dllexport))
    #else
      #define __zz_cib_public __declspec(dllexport)
    #endif
#else
  #if __GNUC__ >= 4
    #define __zz_cib_public __attribute__ ((visibility ("default")))
  #else
    #define __zz_cib_public
  #endif
#endif

extern "C" __zz_cib_public __zz_cib_::MethodTable __zz_cib_GraphicsLib_GetMethodTable(std::uint32_t classId)
{
  return __zz_cib_::GraphicsLib_GetMethodTable(classId);
}

