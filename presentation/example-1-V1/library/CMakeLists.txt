project(example-1-library-V1)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILE_NAMES
	A.h
)
set(LIBRARY_SOURCES
	A.cpp
)
set(CIB_SOURCES
	cib/MethodTableA.cpp
)

add_library(example-1-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_SOURCES}
)
set_target_properties(example-1-library
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLEXPORT}
)
target_include_directories(example-1-library
	PRIVATE
		pub
)

if(MSVC)
    set_target_properties(example-1-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
