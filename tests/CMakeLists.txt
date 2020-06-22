#tests folder

include_directories(
	../
)

add_executable(
	special-sort-tests
	SpecialSortTest.cpp
	../SpecialSortFunctions.cpp
)

target_link_libraries(
	special-sort-tests
	gtest
)