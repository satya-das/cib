project(10-library-exports-a-class-client-V2)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(NEW_LIBRARY_PATH $<TARGET_FILE:library-exports-a-class-library-V2>)
set(TEST_LIBRARY_PATH $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/$<TARGET_FILE_NAME:library-exports-a-class-library>)

set(OLD_CLIENT_PATH $<TARGET_FILE:library-exports-a-class-client>)
set(TEST_CLIENT_PATH $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/$<TARGET_FILE_NAME:library-exports-a-class-client>)

# OUTPUT cannot use $<TARGE...> so we create a dummy file that mirrors the required OUTPUT file.
set(DUMMY_OUTPUT_FILE ${CMAKE_BINARY_DIR}/presentation/10-library-exports-a-class-V2-dummy)

add_custom_command(
	OUTPUT ${DUMMY_OUTPUT_FILE}

	COMMAND ${CMAKE_COMMAND} -E copy ${NEW_LIBRARY_PATH} ${TEST_LIBRARY_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${TEST_CLIENT_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${TEST_CLIENT_PATH} ${DUMMY_OUTPUT_FILE}

	DEPENDS library-exports-a-class-library-V2 library-exports-a-class-client
)
add_custom_target(
	library-exports-a-class-client-V2 ALL

	DEPENDS
		${DUMMY_OUTPUT_FILE}
)

add_test(NAME library-exports-a-class-V2 COMMAND ${TEST_CLIENT_PATH})
