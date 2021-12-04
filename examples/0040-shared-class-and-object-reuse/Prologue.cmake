# It's not a backward or forward compatibility example but it is based on simple class example
set(PREV_TEST_NAME "0010-simple-class")

set(PUB_FILE_BASE_NAMES
    example
    B
)

set(CIBCMD $<TARGET_FILE:cib> --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example --cib-ids-file ${example_ROOT}/../${PREV_TEST_NAME}/cib/__zz_cib_Example-ids.h)
set(DEPENDS ${PREV_TEST_NAME}_lib) 
