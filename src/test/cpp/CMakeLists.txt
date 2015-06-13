cmake_minimum_required (VERSION 2.8)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable( TestDataStructures TestMain.cpp DynamicArrayTest.cpp)
target_link_libraries( TestDataStructures ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

install( TestDataStructures  /tests)
