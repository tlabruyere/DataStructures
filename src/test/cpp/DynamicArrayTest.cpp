#include "gtest/gtest.h"
#include "DynamicArray.h"

#include <iostream>

using namespace std;


TEST( DynamicArrayTest, insertion)
{
    DynamicArray<int> testArray;

    ASSERT_EQ( 10, testArray.Capacity() );
    ASSERT_EQ( 0, testArray.Size() );
    int num2insert = 100;
    for( int i=0;i< num2insert;i++)
    {
        testArray.insert(i);
    }

    ASSERT_EQ( num2insert, testArray.Size() );
}

TEST( DynamicArrayTest, access )
{
    DynamicArray<int> testArray2;

    int num2insert = 10000000;
    for( int i=0;i< num2insert;i++)
    {
        testArray2.insert(i);
    }
    // size better equal now
    ASSERT_EQ( num2insert, testArray2.Size());
    for( int i=0;i< num2insert;i++)
    {
        EXPECT_EQ( i, testArray2[i]);
    }

    int temp = testArray2[0];
    EXPECT_EQ( 0, temp);
    temp = 10;
    EXPECT_EQ( 10, temp);
}


