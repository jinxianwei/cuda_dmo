project(project)

# required cmake version
cmake_minimum_required(VERSION 2.8)

add_subdirectory(cuda)
set(EXTRA_LIBS ${EXTRA_LIBS} gpu)

ADD_EXECUTABLE(project main.cpp)

find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
message(STATUS "include:${OpenCV_INCLUDE_DIRS}")

target_link_libraries(project ${EXTRA_LIBS} ${OpenCV_LIBS})
