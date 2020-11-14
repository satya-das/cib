project(library-exports-a-class-hierarchy)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILE_NAMES
	A.h
	B.h
)
set(LIBRARY_SOURCES
)
set(CIB_SOURCES
	cib/MethodTableA.cpp
	cib/MethodTableB.cpp
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
		pub
)

if(MSVC)
    set_target_properties(library-exports-a-class-hierarchy-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
