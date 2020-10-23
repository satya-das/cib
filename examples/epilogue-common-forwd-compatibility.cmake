set(TEST_NAME    "${example}-new-client-with-old-lib")

add_custom_target(
    ${TEST_NAME} ALL
    ${CMAKE_COMMAND} -E make_directory ${TEST_NAME}
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${example}> $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/$<TARGET_FILE_NAME:${example}>
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:${PREV_TEST_NAME}_lib> $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/$<TARGET_FILE_NAME:${example}_lib>
    DEPENDS ${example} ${PREV_TEST_NAME}
    WORKING_DIRECTORY ${EXAMPLES_BIN_DIR}
)

add_test(NAME ${TEST_NAME}
    COMMAND $<TARGET_FILE_DIR:${example}>/${TEST_NAME}/$<TARGET_FILE_NAME:${example}>
)
