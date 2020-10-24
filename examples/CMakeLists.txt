cmake_minimum_required(VERSION 2.8.7)

include("../../common/cmake/conf.cmake")

set(EXAMPLE_HEADERS "")

# We are using single CMakeLists.txt for all examples.
# Because we do not want to make same change in all files if we have to do common change to all examples.

set(EXAMPLES
	010-simple-class
	015-simple-class-and-bkwd-compatibility
	018-simple-class-and-forwd-compatibility
	019-function-overloading
	020-virtual-function
	030-virtual-function-and-bkwd-compatibility
	035-virtual-function-and-forwd-compatibility
	040-inheritance-change-and-bkwd-compatibility
	050-inheritance-type-and-bkwd-compatibility
	055-abstract-class
	060-simple-interface-class
	065-force-make-interface-class
	070-simple-interface-class-and-bkwd-compatibility
	075-simple-interface-class-and-forwd-compatibility
	080-complex-interface-classes
	090-complex-interface-classes-and-bkwd-compatibility
	100-template-classes
	110-facade-classes-and-rtti
	115-protected-methods
	120-proxy-object-reuse
	130-layout-sharing-proxy-classes
	140-rvalue-parameters
	150-reference-of-pointer
	160-free-functions
	# 170-private-virtuals
	# 180-pod-struct
	# 190-function-pointer fails with Visual Studio 2017 that is used with travis-ci
	# So, it is added later for other compilers
	# 190-function-pointer
	200-deleted-members
	210-enum-parameters
	220-unique-ptr
	225-intrusive-ptr
	230-lib-managed-proxies-proxy
	240-operator-overloading
	250-namespace
	260-conditional-api-availability
	300-std-vector
	310-std-function
	# 320-third-party-class
)

if (NOT MSVC_TOOLSET_VERSION MATCHES 141)
    set(EXAMPLES ${EXAMPLES} 190-function-pointer)
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
