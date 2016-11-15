#ifndef DATASTRUCTURES_BINARYSEARCHTREE_H__
#define DATASTRUCTURES_BINARYSEARCHTREE_H__

#include <stdexcept>
#include "TreeNode.h"

template <class T> 
class BinarySearchTree {
  public:
    BinarySearchTree() : mHead(nullptr) {}
    ~BinarySearchTree() {
        delete mHead;
    }

    void insert(const T& data);

    TreeNode<T>* find(const T& data) const;

    void printTree() const {
        _printTree(mHead);
    }

  private:
    void _insert(
        TreeNode<T>*& node, 
        const T& data); 

    void _printTree(TreeNode<T>* node) const;

    TreeNode<T>* _find(
        TreeNode<T>* node,
        const T& data) const;

    TreeNode<T>* mHead;
};

// public
template <class T>
void BinarySearchTree<T>::insert(const T& data) {
    _insert(mHead,data);
}

// public
template <class T>
TreeNode<T>* BinarySearchTree<T>::find(const T& data)  const{
    return _find(mHead, data);
}

// private
template <class T>
void BinarySearchTree<T>::_insert(
        TreeNode<T>*& node, 
        const T& data) {
    if (node == nullptr) {
        node = new TreeNode<T>(data);
        return;
    }
    if (node->data() < data) {
        _insert(node->left(), data);
    } else {
        _insert(node->right(), data);
    }
}

// private
template <class T>
void BinarySearchTree<T>::_printTree(TreeNode<T>* node) const {
    if (node == nullptr) {
        return;
    } 
    std::cout<< "node = " << node->data() << std::endl;
    if (node->left() !=nullptr) {
        _printTree(node->left());
    }
    if (node->right() != nullptr) {
        _printTree(node->right());
    }
}

// private
template <class T>
TreeNode<T>* BinarySearchTree<T>::_find(TreeNode<T>* node, const T& data) const {
    if (node == nullptr) {
        return nullptr;
    }
    if (node->data() == data) {
        return node;
    }
    if (node->data() < data) {
        return _find(node->left(), data);
    } else {
        return _find(node->right(), data);
    }
}


#endif // end  DATASTRUCTURES_TREE_H__

