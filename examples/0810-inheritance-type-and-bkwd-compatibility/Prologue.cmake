include("${example_ROOT}/common.cmake")

set(CIBCMD $<TARGET_FILE:cib> --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example --cib-ids-file ${example_ROOT}/../${PREV_TEST_NAME}/cib/__zz_cib_Example-ids.h)
set(DEPENDS ${PREV_TEST_NAME}_lib) 
