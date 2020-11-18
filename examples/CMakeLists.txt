cmake_minimum_required(VERSION 2.8.7)

include("../../common/cmake/conf.cmake")

set(EXAMPLE_HEADERS "")

# We are using single CMakeLists.txt for all examples.
# Because we do not want to make same change in all files if we have to do common change to all examples.

set(EXAMPLES
	0010-simple-class
	0020-simple-class-and-bkwd-compatibility
	0030-simple-class-and-forwd-compatibility
	0040-shared-class-and-object-reuse
	0050-virtual-function
	0060-virtual-function-and-bkwd-compatibility
	0070-virtual-function-and-forwd-compatibility
	0080-interface-class
	0090-interface-class-and-bkwd-compatibility
	0100-interface-class-and-forwd-compatibility
	0110-facade-class-and-rtti
	0120-template-classes
	0200-lib-managed-proxies
	0210-rvalue-parameters
	0220-reference-of-pointer
	0300-unique-ptr
	0310-intrusive-ptr
	0400-stl-template-classes
	0410-std-function
	0500-layout-sharing-proxy-classes
	0510-pod-struct
	0600-free-functions
	0610-namespace
	0620-function-overloading
	0630-operator-overloading
	0640-protected-methods
	# 0650-private-virtuals
	0700-conditional-api-availability
	0800-inheritance-change-and-bkwd-compatibility
	0810-inheritance-type-and-bkwd-compatibility
	0900-force-make-interface-class
	0910-interface-class-with-implementation
	1000-deleted-members
	1010-enum-parameters
	1020-complex-interface-classes
	# 2000-function-pointer fails with Visual Studio 2017 that is used with travis-ci
	# So, it is added later for other compilers
	# 2000-function-pointer
)

if (NOT MSVC_TOOLSET_VERSION MATCHES 141)
    set(EXAMPLES ${EXAMPLES} 2000-function-pointer)
endif()

foreach(example ${EXAMPLES})
    set(example_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example})

    set(LIB_GLUE_SRCS_EXTRA "")
    include("${example}/lists.cmake")
endforeach()

set(EXAMPLE_HEADERS ${EXAMPLE_HEADERS} PARENT_SCOPE)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
  add_custom_command(
      OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/README.md
      COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/README.md
      DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
endif()

add_custom_target(
    ExamplesDocs ALL
    DEPENDS
        ${CMAKE_CURRENT_SOURCE_DIR}/README.md
)
