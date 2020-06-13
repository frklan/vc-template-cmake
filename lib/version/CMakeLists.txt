cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(libversion)

add_custom_command(
  OUTPUT  ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
  COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/makeversion.sh -o ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
)

add_custom_target(${PROJECT_NAME}_dummy ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/version.cpp)

add_custom_command(TARGET ${PROJECT_NAME}_dummy
  POST_BUILD
  COMMAND echo removing version.cpp
  COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/version.cpp
)

add_library(${PROJECT_NAME} STATIC ${CMAKE_CURRENT_BINARY_DIR}/version.cpp)