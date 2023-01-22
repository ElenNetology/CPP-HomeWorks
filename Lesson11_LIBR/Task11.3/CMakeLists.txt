cmake_minimum_required(VERSION 3.22.0)
project(DinamicLib)
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )
add_library(DinamicLib SHARED leave.h leave.cpp)
add_executable(SourceExe Source.cpp)
target_link_libraries(SourceExe DinamicLib)

