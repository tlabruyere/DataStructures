#ifndef __DATA_STRUCTURE_H__
#define __DATA_STRUCTURE_H__

#include <utility>

//namespace DataStruct { 
template <class T> 
class DataStructure
{
    public:
//        virtual ~DataStructure();
        virtual bool insert( const T& pObj) = 0;
        virtual bool remove( const T& pObj) = 0;
//        virtual std::pair<T*,unsigned long> find( const T& pObj) = 0;
        virtual T* find( const T& pObj) = 0;
        virtual unsigned long size() = 0;
        virtual unsigned long capacity() = 0;
        virtual T* begin() = 0;
        virtual T* end() = 0;
};

//};

#endif

