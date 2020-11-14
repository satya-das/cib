
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/)

add_subdirectory(10-library-exports-a-class)
add_subdirectory(10-library-exports-a-class-V2)
add_subdirectory(20-library-exports-a-class-hierarchy)
add_subdirectory(30-interface-class)
