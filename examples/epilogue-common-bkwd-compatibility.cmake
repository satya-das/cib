set(TEST_NAME    "${example}-new-lib-with-old-client")

add_custom_target(
    ${TEST_NAME} ALL
    ${CMAKE_COMMAND} -E make_directory $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${PREV_TEST_NAME}> $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${example}_lib> $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/$<TARGET_FILE_NAME:${PREV_TEST_NAME}_lib>
    DEPENDS ${example} ${PREV_TEST_NAME}
    WORKING_DIRECTORY ${EXAMPLES_BIN_DIR}
)

add_test(NAME ${TEST_NAME}
    COMMAND $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/$<TARGET_FILE_NAME:${PREV_TEST_NAME}>
)
