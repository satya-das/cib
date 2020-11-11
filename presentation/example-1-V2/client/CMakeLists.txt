project(example-1-client-V2)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(NEW_LIBRARY_PATH $<TARGET_FILE:example-1-library-V2>)
set(TEST_LIBRARY_PATH $<TARGET_FILE_DIR:example-1-library-V2>/$<TARGET_FILE_NAME:example-1-library>)

set(OLD_CLIENT_PATH $<TARGET_FILE:example-1-client>)
set(TEST_CLIENT_PATH $<TARGET_FILE_DIR:example-1-library-V2>/$<TARGET_FILE_NAME:example-1-client>)

add_custom_command(
	OUTPUT ${CMAKE_BINARY_DIR}/presentation/example-1-V2/example-1-dummy

	COMMAND ${CMAKE_COMMAND} -E copy ${NEW_LIBRARY_PATH} ${TEST_LIBRARY_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${TEST_CLIENT_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${CMAKE_BINARY_DIR}/presentation/example-1-V2/example-1-dummy

	DEPENDS example-1-library-V2 example-1-client
)
add_custom_target(
	example-1-client-V2 ALL

	DEPENDS
		${CMAKE_BINARY_DIR}/presentation/example-1-V2/example-1-dummy
)

add_test(NAME example-1-V2 COMMAND ${TEST_CLIENT_PATH})
