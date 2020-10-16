list(APPEND LIB_GLUE_SRCS
    ${example_ROOT}/cib/SkRefCnt.h.cpp
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.h
    ${example_ROOT}/cib/__zz_cib_Example-proxy-mgr.cpp
)

list(APPEND EXP_SOURCES
    ${example_ROOT}/exp/SkRefCnt.cpp
)

set(CIBCMD $<TARGET_FILE:cib> -i pub -o exp -b cib -m Example --always-use-unique-namespace=true)
