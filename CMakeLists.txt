cmake_minimum_required (VERSION 2.8)
project (DataStructors)

set( CMAKE_CXX_FLAGS
    ${CMAKE_CXX_FLAGS} "-std=c++0x")

include_directories(include) 
include_directories(../DataStructures/include) 

add_library( DataStruct
    src/main/cpp/ClassTemplate.cpp
)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(TestDataStructures
    src/test/cpp/TestMain.cpp
    src/test/cpp/DynamicArrayTest.cpp
    src/test/cpp/BTreeTest.cpp
)

target_link_libraries(TestDataStructures
    ${GTEST_LIBRARIES}
    ${GTEST_MAIN_LIBRARIES}
    pthread
)

