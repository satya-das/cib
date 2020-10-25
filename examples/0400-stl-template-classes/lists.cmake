set(LIB_GLUE_SRCS_EXTRA
    ${example_ROOT}/cib/vector.cpp
    ${example_ROOT}/cib/__zz_cib_vector-iterator.h.cpp
    ${example_ROOT}/cib/__zz_cib_vector-reverse_iterator.h.cpp
    ${example_ROOT}/cib/list.cpp
    ${example_ROOT}/cib/__zz_cib_bidirectional_iterator.h.cpp
    ${example_ROOT}/cib/__zz_cib_bidirectional_reverse_iterator.h.cpp
    ${example_ROOT}/cib/C.h.cpp
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.h
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.cpp
)

include("${example_ROOT}/../common.cmake")

