cmake_minimum_required (VERSION 3.1)

project(Homework1)

# Execute CMake for Eclipse as:
# cmake ../AwwGeezMan/ -G"Eclipse CDT4 - Unix Makefiles" 
#	-DCMAKE_ECLIPSE_VERSION=4.14 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER_ARG1=-std=c++17

#add_compile_options(-Wall)

# Do NOT edit this file (unless you know CMake; but there's no reason to!!)

add_subdirectory(src)

add_subdirectory(Tester)