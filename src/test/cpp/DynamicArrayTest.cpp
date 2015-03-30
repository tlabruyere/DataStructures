#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "DynamicArray.h"


class DynamicArrayTest : public ::testing::Test
{
    public:
        DynamicArrayTest() :
            testArray()
        {
        }

        ~DynamicArrayTest()
        {
        }
        
        DynamicArray<int> testArray;
        std::string temp;
};


using namespace std;

TEST_F( DynamicArrayTest, insertion)
{
    DynamicArray<int> testArray;

    ASSERT_EQ( 10, testArray.capacity() );
    ASSERT_EQ( 0, testArray.size() );
    int num2insert = 100;
    for( int i=0;i< num2insert;i++)
    {
        testArray.insert(i);
    }

    ASSERT_EQ( num2insert, testArray.size() );
}

TEST_F( DynamicArrayTest, access )
{
    DynamicArray<int> testArray2;

    int num2insert = 10000000;
    for( int i=0;i< num2insert;i++)
    {
        testArray2.insert(i);
    }
    // size better equal now
    ASSERT_EQ( num2insert, testArray2.size());
    for( int i=0;i< num2insert;i++)
    {
        EXPECT_EQ( i, testArray2[i]);
    }

    int temp = testArray2[0];
    EXPECT_EQ( 0, temp);
    temp = 10;
    EXPECT_EQ( 10, temp);
}
/*
TEST_F( DynamicArrayTest, find)
{
    DynamicArray<int> testArray;

    int num2insert = 10;
    for( int i=0;i< num2insert;i++)
    {
        testArray.insert(i);
    }  

    EXPECT_EQ(&testArray[5],testArray.find( 5));
}
*/
