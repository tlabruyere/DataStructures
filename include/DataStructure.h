#ifndef __DATA_STRUCTURE_H__
#define __DATA_STRUCTURE_H__

//namespace DataStruct { 
template <class T> 
class DataStructure
{
    public:
//        virtual ~DataStructure();
        virtual bool insert( const T& pObj) = 0;
        virtual bool remove( const T& pObj) = 0;
        virtual T* find( const T& pObj) = 0;
        virtual unsigned long Size() = 0;
        virtual unsigned long Capacity() = 0;
        virtual T* Begin() = 0;
        virtual T* End() = 0;
};

//};

#endif

