#ifndef DATASTRUCTURES_TREENODE_H__
#define DATASTRUCTURES_TREENODE_H__
#include <memory>
template <class T> 
class TreeNode {
  public:
    TreeNode(const T& data) :
        mData(data),
        mLeft(nullptr),
        mRight(nullptr) {
    }

    ~TreeNode() {
        delete mLeft;
        delete mRight;
    }
    TreeNode<T>*& left() {return mLeft;}
    TreeNode<T>*& right() {return mRight;}
    const T& data() const {return mData;}

  private:
    TreeNode<T>* mLeft;
    TreeNode<T>* mRight;
    T mData;

};

#endif // end DATASTRUCTURES_TREENODE_H__
