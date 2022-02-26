cmake_minimum_required(VERSION 3.5.0)

project(RayTracingWeekwend VERSION 0.1.0)

include(CTest)
enable_testing()

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files ${source_dir}/*.cpp)

add_executable (RayTracingWeekend ${source_files})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
