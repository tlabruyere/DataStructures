cmake_minimum_required (VERSION 2.8)

set( datastructures_PUBLIC_HEADERS
    DataStructure.h
    DynamicArray.h
    DynamicArray.hpp ) 

add_executable( DataStructureTest 
    src/test/cpp/DynamicArrayTest.cpp
    src/test/cpp/TestMain.cpp
)

INSTALL(TARGETS DataStructuresTest DESTINATION testbin) 

INSTALL_HEADERS(TARGET datastructures HEADERS ${datastructures_PUBLIC_HEADERS}  DESTINATION "DataStructures")
