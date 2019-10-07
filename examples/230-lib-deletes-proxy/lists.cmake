set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include ../../common/mem-listener.h")

set(LIB_GLUE_SRCS_EXTRA
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.h
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.cpp
)

include("${example_ROOT}/../common.cmake")

