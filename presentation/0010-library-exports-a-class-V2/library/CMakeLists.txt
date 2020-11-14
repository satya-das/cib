project(library-exports-a-class-library-V2)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILE_NAMES
	A.h
)

set(CIB_SOURCES
	cib/MethodTableA.cpp
)

add_library(library-exports-a-class-library-V2
	SHARED
		${LIBRARY_PUB_FILES}
		${CIB_SOURCES}
)
set_target_properties(library-exports-a-class-library-V2
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(library-exports-a-class-library-V2
	PRIVATE
		pub
)

if(MSVC)
    set_target_properties(library-exports-a-class-library-V2 PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
