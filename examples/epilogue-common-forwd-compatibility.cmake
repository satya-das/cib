get_target_property(CLIENT_SUFFIX "${PREV_TEST_NAME}" SUFFIX)
get_target_property(LIBRARY_SUFFIX "${PREV_TEST_NAME}_lib"   SUFFIX)
get_target_property(LIBRARY_PREFIX "${PREV_TEST_NAME}_lib"   PREFIX)

set(PREV_LIBNAME "${LIBRARY_PREFIX}${PREV_TEST_NAME}_lib.so")
set(NEW_LIBNAME  "${LIBRARY_PREFIX}${example}_lib.so")
set(CLIENT       "${example}${SUFFIX}")
set(TEST_NAME    "${example}-new-client-with-old-lib")

add_custom_target(
    ${TEST_NAME} ALL
        ${CMAKE_COMMAND} -E make_directory ${TEST_NAME}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${CLIENT} ${EXAMPLES_BIN_DIR}/${TEST_NAME}/${CLIENT}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${PREV_LIBNAME} ${EXAMPLES_BIN_DIR}/${TEST_NAME}/${NEW_LIBNAME}
        DEPENDS ${example} ${PREV_TEST_NAME}
        WORKING_DIRECTORY ${EXAMPLES_BIN_DIR}
)

add_test(NAME ${TEST_NAME}
    COMMAND ${EXAMPLES_BIN_DIR}/${TEST_NAME}/${CLIENT}
)

