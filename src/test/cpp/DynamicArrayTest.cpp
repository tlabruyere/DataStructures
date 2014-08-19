#include "gtest/gtest.h"
#include "DynamicArrayTestFixture.h"


TEST_F( DynamicArrayTest, insertion)
{
    ASSERT_EQ( 10, testArray.Capacity() );
    ASSERT_EQ( 0, testArray.Size() );
    int num2insert = 20;
    for( int i=0;i< num2insert;i++)
    {
        testArray.insert(i);
    }

    ASSERT_EQ( num2insert, testArray.Size() );
}

TEST_F( DynamicArrayTest, access )
{
    int num2insert = 20;
    for( int i=0;i< num2insert;i++)
    {
        testArray.insert(i);
    }
    // size better equal now
    ASSERT_EQ( num2insert, testArray.Size());
    for( int i=0;i< num2insert;i++)
    {
        EXPECT_EQ( i, testArray[i]);
    }

    int temp = testArray[0];
    EXPECT_EQ( 0, temp);
    temp = 10;
    EXPECT_EQ( 10, temp);
}
 
