include("${example_ROOT}/common.cmake")

set(CIBCMD $<TARGET_FILE:cib> -i pub -o exp -b cib -m Example -c ${example_ROOT}/../${PREV_TEST_NAME}/cib/__zz_cib_Example-ids.h)
set(DEPENDS ${PREV_TEST_NAME}_lib) 
