#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__
#include <iostream>

template <class T>
class Node {
    public:
        Node(const T& pData) :
            mData(pData), 
            mNext(NULL) {}
        T data() const {return mData;}
        void data(const T& pData) {
            mData = pData;
        }
        Node* next() const {return mNext;}
        void next(Node* pNext) {
            mNext = pNext;
        }
    private:
        T mData;
        Node<T>* mNext;
};

template <class T>
class LinkedList {
    public:
        LinkedList():
            mHead(NULL) {}
        ~LinkedList() {
            std::cout << "deconstructing" <<std::endl;
            Node<T>* prev = mHead;
            Node<T>* next = mHead;
            while(next!= NULL) {
                prev = next;
                next = prev->next();
                if (prev) {
                    delete prev;
                }
            }
        }

        void addNode(const T& data) {
            Node<T>* iter = mHead;
            if (iter != NULL) {
                int ctr = 0;
                while (iter->next() !=NULL) {
                    iter = iter->next();
                    ctr++;
                }
                iter->next(new Node<T>(data));
            } else {
                mHead = new Node<T>(data);
            }
        }
        Node<T>* head() const {return mHead;}

    private:
        Node<T>* mHead;
};

#endif
