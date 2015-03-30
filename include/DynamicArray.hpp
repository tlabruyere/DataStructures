//#include "DynamicArray.h"
#include <algorithm>
#include <iostream>
#include <exception>

// public
template <class T>
DynamicArray<T>::DynamicArray( unsigned long pSize ) :
    DataStructure<T>(),
    mCurSize( 0 ),
    mCapacity( pSize ) 
{
    mArray = new T[pSize];
}

// public
template <class T>
DynamicArray<T>::~DynamicArray()
{
    if( mArray != NULL)
    {
        delete [] mArray;
    }
    mArray = NULL;
}

// public
template <class T>
bool DynamicArray<T>::insert( const T& pObj)
{
    if( mCurSize >= mCapacity ) 
    {
        reserve( mCapacity * GROW_SIZE_MULTIPLE );
    }
    mArray[mCurSize] = pObj;
    mCurSize++;
    return true;
}

// public
template <class T>
bool DynamicArray<T>::remove( const T& pObj)
{
    T* index = find( pObj);
    // if value is not found, return false
    if( index == NULL)
        return false; 
    if( index != end() )
    {
        std::copy( 
            index + 1, 
            mArray + mCurSize, 
            index );
    } // else at the end, just decrement the size 
    mCurSize--;
    return true;
}

// public
template <class T>
bool DynamicArray<T>::remove( unsigned long pObj)
{
    return true;
}

// public
template <class T>
const T& DynamicArray<T>::operator [] (unsigned long pIdx)
{
    if( pIdx > mCurSize) 
    {
        //"Access is out of bounds" );
        throw std::exception();
    }
    else 
    {
        return mArray[pIdx];
    }
}

// public
template <class T>
T* DynamicArray<T>::find( const T& pObj )
{
    T* temp =NULL;
    unsigned long iter;
    for( iter = 0 ;iter < mCurSize; iter++)
    {
       if( mArray[iter] == pObj)
           temp = &mArray[iter];
    }
    return temp;
}

// public
template <class T>
T* DynamicArray<T>::begin()
{
    return &mArray[0];
}

// public
template <class T>
T* DynamicArray<T>::end()
{
    return &mArray[mCurSize];
}

// protected
template <class T>
void DynamicArray<T>::reserve( unsigned long pNewCapacity ) 
{
    T* largerArray = new T[pNewCapacity];
    std::copy( mArray, mArray + mCurSize, largerArray );
    delete []  mArray;
    mCapacity = pNewCapacity;
    mArray = largerArray;
}
