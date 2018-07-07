cmake_minimum_required (VERSION 3.0)
set (CMAKE_CXX_STANDARD 11)
project (ilp)

find_package (Boost COMPONENTS unit_test_framework REQUIRED)

include_directories (include)

add_library (interledger src/core/condition.cpp)

add_executable (tests test/condition_tests.cpp)
target_link_libraries (tests 
	interledger
	${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
	)