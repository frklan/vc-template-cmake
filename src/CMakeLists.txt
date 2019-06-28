cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(vct)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(vct)

add_custom_command(
  OUTPUT  ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
  COMMAND ${CMAKE_SOURCE_DIR}/makeversion.sh -o ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
)

# The main program
add_executable(${PROJECT_NAME} main.cpp ${CMAKE_CURRENT_BINARY_DIR}/version.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE vct_lib)