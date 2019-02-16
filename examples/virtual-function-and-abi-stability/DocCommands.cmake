set(${example}DiffFilesForReadMe ${example_ROOT}/header-diff.diff)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/../readme-assets/${example}
    COMMAND diff -Bw -u1000 --label ${PREV_TEST_NAME}/pub/example.h --label ${NEW_TEST_NAME}/pub/example.h ${example_ROOT}/../${PREV_TEST_NAME}/pub/example.h ${example_ROOT}/pub/example.h >${example_ROOT}/../readme-assets/${example}/header-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -u1000 --label ${PREV_TEST_NAME}/src/example-client.cpp --label ${NEW_TEST_NAME}/src/example-client.cpp ${example_ROOT}/../${PREV_TEST_NAME}/src/example-client.cpp ${example_ROOT}/src/example-client.cpp >${example_ROOT}/../readme-assets/${example}/client-diff.diff || echo "Ignore failure" >/dev/null
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/../${PREV_TEST_NAME}/pub/example.h ${example_ROOT}/src/example-client.cpp ${example_ROOT}/../${PREV_TEST_NAME}/src/example-client.cpp
    WORKING_DIRECTORY ${example_ROOT}
)

add_custom_target(${example}DiffsForReadMe ALL DEPENDS ${${example}DiffFilesForReadMe})

