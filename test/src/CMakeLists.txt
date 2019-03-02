cmake_minimum_required(VERSION 3.6)

project(vct_test)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(
  -Wno-weak-vtables 
  -Wno-padded 
  -Wno-conversion 
  -Wno-zero-as-null-pointer-constant
  -Wno-old-style-cast 
  -Wno-double-promotion 
  -Wno-global-constructors 
  -Wno-switch-enum 
  -Wno-cast-qual 
  -Wno-shadow
  -Wno-cast-qual 
)

find_package(Catch2 REQUIRED)

# The test program
file(GLOB_RECURSE TEST_SOURCES *.cpp *.h)
add_executable(${PROJECT_NAME} ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE vct_lib Catch2::Catch2)