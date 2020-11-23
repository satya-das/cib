project(library-exports-a-class-library-V2)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILES
	library/pub/Circle.h
)

set(LIBRARY_SRC_FILES
	library/src/Circle.cpp
)

set(CIB_SOURCES
	library/cib/MethodTableCircle.cpp
)

add_library(library-exports-a-class-library-V2
	SHARED
		${LIBRARY_PUB_FILES}
		${LIBRARY_SRC_FILES}
		${CIB_SOURCES}
)
set_target_properties(library-exports-a-class-library-V2
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(library-exports-a-class-library-V2
	PRIVATE
		library/pub
)

if(MSVC)
    set_target_properties(library-exports-a-class-library-V2 PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

############# CLIENT ##########

if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	# This is required when MethodTable is implemented using struct
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

set(CLIENT_SOURCES
	client/main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/library/exp/Circle.cpp
)

add_executable(library-exports-a-class-client-V2
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(library-exports-a-class-client-V2
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/library/exp
)

target_link_libraries(library-exports-a-class-client-V2
	PRIVATE
		library-exports-a-class-library-V2
)

set_target_properties(library-exports-a-class-client-V2
	PROPERTIES
		COMPILE_DEFINITIONS DLLIMPORT=${DLLIMPORT}
)

if(MSVC)
    set_target_properties(library-exports-a-class-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

add_test(NAME library-exports-a-class-V2 COMMAND $<TARGET_FILE:library-exports-a-class-client-V2>)

#####################
## Backward compatibility test

set(NEW_LIBRARY_PATH $<TARGET_FILE:library-exports-a-class-library-V2>)
set(OLD_CLIENT_PATH $<TARGET_FILE:library-exports-a-class-client>)

set(TEST_DIR $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/${PROJECT_NAME}/backward-compatibility/)

set(TEST_LIBRARY_PATH ${TEST_DIR}/$<TARGET_FILE_NAME:library-exports-a-class-library>)
set(TEST_CLIENT_PATH ${TEST_DIR}/$<TARGET_FILE_NAME:library-exports-a-class-client>)

# OUTPUT cannot use $<TARGE...> so we create a dummy file that mirrors the required OUTPUT file.
set(DUMMY_OUTPUT_FILE ${CMAKE_BINARY_DIR}/presentation/10-library-exports-a-class-V2-dummy)

add_custom_command(
	OUTPUT ${DUMMY_OUTPUT_FILE}

	COMMAND ${CMAKE_COMMAND} -E make_directory ${TEST_DIR}
	COMMAND ${CMAKE_COMMAND} -E copy ${NEW_LIBRARY_PATH} ${TEST_LIBRARY_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_CLIENT_PATH} ${TEST_CLIENT_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${TEST_CLIENT_PATH} ${DUMMY_OUTPUT_FILE}

	DEPENDS library-exports-a-class-library-V2 library-exports-a-class-client
)
add_custom_target(
	library-exports-a-class-backward-compatibility ALL

	DEPENDS
		${DUMMY_OUTPUT_FILE}
)

add_test(NAME library-exports-a-class-backward-compatibility COMMAND ${TEST_CLIENT_PATH})

#####################
## Forward compatibility test

set(OLD_LIBRARY_PATH $<TARGET_FILE:library-exports-a-class-library>)
set(NEW_CLIENT_PATH $<TARGET_FILE:library-exports-a-class-client-V2>)

set(TEST_DIR $<TARGET_FILE_DIR:library-exports-a-class-library-V2>/${PROJECT_NAME}/forward-compatibility/)

set(TEST_LIBRARY_PATH ${TEST_DIR}/$<TARGET_FILE_NAME:library-exports-a-class-library-V2>)
set(TEST_CLIENT_PATH ${TEST_DIR}/$<TARGET_FILE_NAME:library-exports-a-class-client-V2>)

# OUTPUT cannot use $<TARGE...> so we create a dummy file that mirrors the required OUTPUT file.
set(DUMMY_OUTPUT_FILE ${CMAKE_BINARY_DIR}/presentation/10-library-exports-a-class-V2-dummy2)

add_custom_command(
	OUTPUT ${DUMMY_OUTPUT_FILE}

	COMMAND ${CMAKE_COMMAND} -E make_directory ${TEST_DIR}
	COMMAND ${CMAKE_COMMAND} -E copy ${OLD_LIBRARY_PATH} ${TEST_LIBRARY_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${NEW_CLIENT_PATH} ${TEST_CLIENT_PATH}
	COMMAND ${CMAKE_COMMAND} -E copy ${TEST_CLIENT_PATH} ${DUMMY_OUTPUT_FILE}

	DEPENDS library-exports-a-class-library library-exports-a-class-client-V2
)
add_custom_target(
	library-exports-a-class-forward-compatibility ALL

	DEPENDS
		${DUMMY_OUTPUT_FILE}
)

add_test(NAME library-exports-a-class-forward-compatibility COMMAND ${TEST_CLIENT_PATH})
