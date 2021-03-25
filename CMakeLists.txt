cmake_minimum_required(VERSION 3.17)
project(library_testing C)

include_directories(${CMAKE_SOURCE_DIR}/lib)

file(GLOB SOURCES "src/*.c")
file(GLOB LIBS "lib/*.dylib")
message("LIBRARIES = ${LIBS}")

set(CMAKE_C_STANDARD 99)



add_executable(libTest ${SOURCES})
target_link_libraries(libTest ${LIBS})