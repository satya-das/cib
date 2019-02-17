get_target_property(CLIENT_SUFFIX "${PREV_TEST_NAME}_client" SUFFIX)
get_target_property(LIBRARY_SUFFIX "${PREV_TEST_NAME}_lib"   SUFFIX)
get_target_property(LIBRARY_PREFIX "${PREV_TEST_NAME}_lib"   PREFIX)

set(PREV_LIBNAME "${LIBRARY_PREFIX}${PREV_TEST_NAME}_lib.so")
set(NEW_LIBNAME  "${LIBRARY_PREFIX}${NEW_TEST_NAME}_lib.so")
set(CLIENT      "${PREV_TEST_NAME}_client${SUFFIX}")

add_custom_target(
    ${example} ALL
        ${CMAKE_COMMAND} -E make_directory ${EXAMPLES_BIN_DIR}/${example}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${CLIENT} ${EXAMPLES_BIN_DIR}/${example}/${CLIENT}
        COMMAND ${CMAKE_COMMAND} -E copy
            ${EXAMPLES_BIN_DIR}/${NEW_LIBNAME} ${EXAMPLES_BIN_DIR}/${example}/${PREV_LIBNAME}
        DEPENDS ${NEW_TEST_NAME}_lib ${PREV_TEST_NAME}_client
)

add_test(NAME ${NEW_TEST_NAME}
    COMMAND ${EXAMPLES_BIN_DIR}/${example}/${CLIENT}
)
