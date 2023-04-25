cmake_minimum_required(VERSION 3.0.2)
project(multi_thread)
set(CMAKE_CXX_STANDARD 11)
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -march=native -O3 -pthread" )
#set( CMAKE_BUILD_TYPE Debug )
set( CMAKE_BUILD_TYPE Release )
add_subdirectory(src)
file(GLOB_RECURSE SOURCES
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)
add_executable(hello_world ${SOURCES})

