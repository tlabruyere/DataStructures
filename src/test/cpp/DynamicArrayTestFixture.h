#ifndef __DYNAMICARRAY_TEST_FIXTURE_H__
#define __DYNAMICARRAY_TEST_FIXTURE_H__

#include "DynamicArray.h"
#include <string>

class DynamicArrayTest : public ::testing::Test
{
    public:
//        DynamicArrayTest()
        virtual void SetUp()
        {
            testArray = new DynamicArray<int>();
        }
//        ~DynamicArrayTest()
        virtual void TearDown()
        {
            delete testArray;
        }
        
        DynamicArray<int>* testArray;
        std::string temp;
};

#endif
