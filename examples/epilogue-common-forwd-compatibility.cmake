get_target_property(CLIENT_SUFFIX "${PREV_TEST_NAME}_client" SUFFIX)
get_target_property(LIBRARY_SUFFIX "${PREV_TEST_NAME}_lib"   SUFFIX)
get_target_property(LIBRARY_PREFIX "${PREV_TEST_NAME}_lib"   PREFIX)

set(PREV_LIBNAME "${LIBRARY_PREFIX}${PREV_TEST_NAME}_lib.so")
set(NEW_LIBNAME  "${LIBRARY_PREFIX}${example}_lib.so")
set(CLIENT       "${example}_client${SUFFIX}")

add_custom_target(
    ${example}-new-client-with-old-lib ALL
        ${CMAKE_COMMAND} -E make_directory ${EXAMPLES_BIN_DIR}/${example}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${CLIENT} ${EXAMPLES_BIN_DIR}/${example}/${CLIENT}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${PREV_LIBNAME} ${EXAMPLES_BIN_DIR}/${example}/${NEW_LIBNAME}
        DEPENDS ${example}_client ${PREV_TEST_NAME}
        WORKING_DIRECTORY ${EXAMPLES_BIN_DIR}
)

add_test(NAME ${example}-new-client-with-old-lib
    COMMAND ${EXAMPLES_BIN_DIR}/${example}/${CLIENT}
)

