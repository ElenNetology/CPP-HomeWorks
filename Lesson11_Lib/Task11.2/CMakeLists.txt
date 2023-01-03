cmake_minimum_required(VERSION 3.22.0)
project(DinamicLib) 
set (CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set (SOURCES_LIB Leaver.cpp) 
set (HEADERS_LIB Header.h)
add_library (DinamicLib STATIC Header.h Leaver.cpp)
add_executable (task11.2.cpp)
target_link_libraries (task11.2 DinamicLib)

