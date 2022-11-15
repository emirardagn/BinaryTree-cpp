#include "BinaryTreeNode.h"
#include <iostream>
using namespace std;

BinaryTreeNode::BinaryTreeNode(int k){
    element = k;
    cout << k <<endl;
    left = 0;
    right = 0;
}