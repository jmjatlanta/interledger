cmake_minimum_required (VERSION 3.0)
project (ilp)

include_directories (include)

add_library (interledger src/core/condition.cpp)

add_executable (tests test/condition_tests.cpp)
target_link_libraries (tests interledger)