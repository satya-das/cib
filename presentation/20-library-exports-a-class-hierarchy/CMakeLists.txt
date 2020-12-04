project(library-exports-a-class-hierarchy)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILES
	library/pub/Base.h
	library/pub/Derived.h
)
set(LIBRARY_SOURCES
)
set(CIB_SOURCES
	library/cib/MethodTableBase.cpp
	library/cib/MethodTableDerived.cpp
)

add_library(library-exports-a-class-hierarchy-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_SOURCES}
)
set_target_properties(library-exports-a-class-hierarchy-library
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(library-exports-a-class-hierarchy-library
	PRIVATE
		library/pub
)

if(MSVC)
    set_target_properties(library-exports-a-class-hierarchy-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()


########### CLIENT ########


if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	# This is required when MethodTable is implemented using struct
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

set(CLIENT_SOURCES
	client/main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/library/exp/Base.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/library/exp/Derived.cpp
)

add_executable(library-exports-a-class-hierarchy-client
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(library-exports-a-class-hierarchy-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/library/exp
)

target_link_libraries(library-exports-a-class-hierarchy-client
	PRIVATE
		library-exports-a-class-hierarchy-library
)

set_target_properties(library-exports-a-class-hierarchy-client
	PROPERTIES
		COMPILE_DEFINITIONS DLLIMPORT=${DLLIMPORT}
)

if(MSVC)
    set_target_properties(library-exports-a-class-hierarchy-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

add_test(NAME library-exports-a-class-hierarchy-V1 COMMAND $<TARGET_FILE:library-exports-a-class-hierarchy-client>)
