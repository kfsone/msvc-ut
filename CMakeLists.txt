cmake_minimum_required (VERSION 3.15...3.20)

project (testing)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

include (CTest)
add_subdirectory (ut)

add_executable (uttest uttest.cpp)

target_link_libraries (uttest ut)

