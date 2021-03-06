project(10-library-exports-a-class-library)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

############# LIBRARY ##########


set(LIBRARY_PUB_FILES
	library/pub/Circle.h
)

set(LIBRARY_SRC_FILES
	library/src/Circle.cpp
)

set(CIB_SOURCES
	library/cib/MethodTableCircle.cpp
)

add_library(library-exports-a-class-library
	SHARED
		${LIBRARY_PUB_FILES}
		${LIBRARY_SRC_FILES}
		${CIB_SOURCES}
)
set_target_properties(library-exports-a-class-library
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(library-exports-a-class-library
	PRIVATE
		library/pub
)

if(MSVC)
    set_target_properties(library-exports-a-class-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
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

add_executable(library-exports-a-class-client
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(library-exports-a-class-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/library/exp
)

target_link_libraries(library-exports-a-class-client
	PRIVATE
		library-exports-a-class-library
)

set_target_properties(library-exports-a-class-client
	PROPERTIES
		COMPILE_DEFINITIONS DLLIMPORT=${DLLIMPORT}
)

if(MSVC)
    set_target_properties(library-exports-a-class-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

add_test(NAME library-exports-a-class-V1 COMMAND $<TARGET_FILE:library-exports-a-class-client>)
