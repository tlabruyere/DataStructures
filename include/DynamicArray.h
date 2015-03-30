#ifndef __DYNAMIC_ARRAY_H__
#define __DYNAMIC_ARRAY_H__

#include "DataStructure.h"
#include <utility>

//namespace DataStruct {
template <class T>
class DynamicArray : public DataStructure<T>
{
    public:
        DynamicArray(unsigned long pSize = INIT_SIZE );
        ~DynamicArray();

        bool insert( const T& pObj);
        bool remove( const T& pObj);
        bool remove( unsigned long pIdx);
        T* find( const T& pObj);
        unsigned long size(){return mCurSize;}
        unsigned long capacity(){return mCapacity;}
        T* begin();
        T* end();

        const T& operator[]( unsigned long pIdx);

    private:
        void reserve(unsigned long pNewCapacity);
        // private consts
        static const int INIT_SIZE =10;
        static const int GROW_SIZE_MULTIPLE =2;

        // private member
        unsigned long mCurSize;
        unsigned long mCapacity;

        T* mArray;

};
#include "DynamicArray.hpp"
//};
#endif
