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
    array = new T[pSize];
}

// public
template <class T>
DynamicArray<T>::~DynamicArray()
{
    if( array != NULL)
    {
        delete [] array;
    }
    array = NULL;
}

// public
template <class T>
bool DynamicArray<T>::insert( const T& pObj)
{
    if( mCurSize >= mCapacity ) 
    {
        reserve( mCapacity * GROW_SIZE_MULTIPLE );
    }
    array[mCurSize] = pObj;
    mCurSize++;
    return true;
}

// public
template <class T>
bool DynamicArray<T>::remove( const T& pObj)
{
    // TODO: implement to use iterators
    T* index = find( pObj);
    if( index == End() )
    {
    
    }
    else
    {
        for( T* i = index; i != End(); i++)
        {
            i = i+1;
        }
    }
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
//        throw std::exception( "Access is out of bounds" );
    }
    else 
    {
        return array[pIdx];
    }
}

// public
template <class T>
T* DynamicArray<T>::find( const T& pObj )
{
    //TODO: lookup stl implementation
    T* temp =NULL;
//    for(std::const_iter<T> iter = Begin() ;iter!= End(); iter++)
    for(unsigned long iter = 0 ;iter < mCurSize; iter++)
    {
//       if( *iter == pObj)
       if( array[iter] == pObj)
           temp = &array[iter];
//           temp = iter;
    }
    return temp;
}

// public
template <class T>
T* DynamicArray<T>::Begin()
{
    return &array[0];
}

// public
template <class T>
T* DynamicArray<T>::End()
{
    return &array[mCurSize];
}

// protected
template <class T>
void DynamicArray<T>::reserve( unsigned long pNewCapacity ) 
{
    T* largerArray = new T[pNewCapacity];
    std::copy( array, array + mCurSize, largerArray );
    delete []  array;
    mCapacity = pNewCapacity;
    array = largerArray;
}
