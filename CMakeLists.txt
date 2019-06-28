cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(vct)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_CLANG_TIDY 
  clang-tidy;
  -header-filter="*.h";
  -checks=*,-fuchsia-default-arguments;)
  
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

add_compile_options(
  -Weverything 
  -Wno-c++98-compat 
  -Wno-c++98-compat-pedantic
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src bin)
add_subdirectory(test)