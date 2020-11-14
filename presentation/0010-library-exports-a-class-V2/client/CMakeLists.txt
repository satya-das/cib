project(library-exports-a-class-client-V2)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(NEW_LIBRARY_PATH $<TARGET_FILE:library-exports-a-class-library-V2>)
set(TEST_LIBRARY_PATH $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/$<TARGET_FILE_NAME:library-exports-a-class-library>)

set(OLD_CLIENT_PATH $<TARGET_FILE:library-exports-a-class-client>)
set(TEST_CLIENT_PATH $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/$<TARGET_FILE_NAME:library-exports-a-class-client>)

add_custom_command(
	OUTPUT ${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-V2/library-exports-a-class-dummy

	COMMAND ${CMAKE_COMMAND} -E copy ${NEW_LIBRARY_PATH} ${TEST_LIBRARY_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${TEST_CLIENT_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-V2/library-exports-a-class-dummy

	DEPENDS library-exports-a-class-library-V2 library-exports-a-class-client
)
add_custom_target(
	library-exports-a-class-client-V2 ALL

	DEPENDS
		${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-V2/library-exports-a-class-dummy
)

add_test(NAME library-exports-a-class-V2 COMMAND ${TEST_CLIENT_PATH})
