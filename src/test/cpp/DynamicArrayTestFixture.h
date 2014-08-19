#ifndef __DYNAMICARRAY_TEST_FIXTURE_H__
#define __DYNAMICARRAY_TEST_FIXTURE_H__

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
};

#endif
