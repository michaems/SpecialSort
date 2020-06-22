cmake_minimum_required (VERSION 2.8)

project (special-sorter)

set(CMAKE_BUILD_TYPE DEBUG)

add_executable(
	special-sorter
	main.cpp
	SpecialSortFunctions.cpp
)

add_subdirectory(googletest)
add_subdirectory(tests)