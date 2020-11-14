
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-hierarchy)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-hierarchy)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/presentation/library-exports-a-class-hierarchy)

add_subdirectory(library)
add_subdirectory(client)
