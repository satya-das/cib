project(interface-class)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILE_NAMES
	A.h
)
set(LIBRARY_SOURCES
)
set(CIB_SOURCES
	cib/MethodTableA.cpp
	cib/MethodTableGenericI.cpp
)

add_library(interface-class-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_SOURCES}
)
set_target_properties(interface-class-library
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(interface-class-library
	PRIVATE
		pub
)

if(MSVC)
    set_target_properties(interface-class-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
