#include <gtest/gtest.h>
#include <stdexcept>
#include "BinarySearchTree.h"

namespace DataStruct {
namespace BTree {
class BTreeTest : public ::testing::Test {
    public:
        BTreeTest() {}
        ~BTreeTest() {}

        BinarySearchTree<int> bst;
};

TEST_F (BTreeTest, insertAndTraverse) {
    int maxInsert = 10;
    for (int i = 0-(maxInsert/2);
            i < 0+(maxInsert/2);
            i++) {
        bst.insert(i);
    }
    bst.printTree();
}

TEST_F (BTreeTest, insertAndSearch) {
    int maxInsert = 10;
    for (int i = 0-(maxInsert/2);
            i < 0+(maxInsert/2);
            i++) {
        bst.insert(i);
    }
    EXPECT_EQ(0, bst.find(0)->data());
    EXPECT_EQ(nullptr,bst.find(-501));
}
}; // end BTree
}; // end DataStruct
