#include "BinarySearchTree.h"
using namespace std;

BinarySearchTree::BinarySearchTree(){
    root = 0;
}
 
BinaryTreeNode * findMin(BinaryTreeNode *t){
    if (t==0)
    {
        return 0;
    }
    if (t->left ==0)
    {
        return t;
    }
    return findMin(t->left);
    
    
}

//Insert
void BinarySearchTree::insert(int num, BinaryTreeNode * & tempRoot){


    if (tempRoot == 0 ) 
    {
       tempRoot = new BinaryTreeNode(num); 
       //cout<<"done"<<endl;
    }
    else if (num > tempRoot->element) 
    {
        //cout<< tempRoot->element <<" < " << num <<endl;
        insert(num,tempRoot->right);
    }

    else if (num < tempRoot->element) 
    {
        //cout<< tempRoot->element <<" > " << num <<endl;
        insert(num,tempRoot->left);
    }
    else{
    }
    
    
}
void BinarySearchTree::insert(int k){
    if (k>0)
    {
       insert(k,root);
    }
      
}

//Remove
void BinarySearchTree::remove(int num, BinaryTreeNode * & tempRoot){
    BinaryTreeNode *oldNode;

    if (tempRoot == nullptr)
    {
        return; //item could not found
    }
    
    if (num < tempRoot->element ) 
    {
        //cout<< tempRoot->element <<" > " << num <<endl;
        remove(num,tempRoot->left);
    }
    
    else if (num > tempRoot->element)  
    {
        //cout<< tempRoot->element <<" < " << num <<endl;
        remove(num,tempRoot->right);
    }

    else if (tempRoot ->left != nullptr && tempRoot->right !=nullptr) 
    {
        tempRoot->element = findMin(tempRoot->right)->element;
        remove(tempRoot->element, tempRoot->right);
    }
    else{
        oldNode = tempRoot;
        tempRoot = (tempRoot->left != nullptr) ? tempRoot->left : tempRoot->right;
        delete oldNode;
    }
    
    
}
void BinarySearchTree::remove(int k){
    if (k>0)
    {
        remove(k,root);
    }
    
    
}

//Inorder
void BinarySearchTree::traverseInorder(BinaryTreeNode * node){

    if (node == 0){
        return;
    }
    traverseInorder(node->left);
    cout << node->element << " ";
    traverseInorder(node->right);
}
void BinarySearchTree::printInorder(){
    cout << "inorder: ";
    traverseInorder(root);
    cout << "\n";
}

//Preorder
void BinarySearchTree::traversePreorder(BinaryTreeNode * node){

    if (node == 0){
        return;
    }
    cout << node->element << " ";
    traversePreorder(node->left);
    traversePreorder(node->right);
}
void BinarySearchTree::printPreorder(){
    cout << "preorder: ";
    traversePreorder(root);
    cout << "\n";
}

//Postorder
void BinarySearchTree::traversePostorder(BinaryTreeNode * node){

    if (node == 0){
        return;
    }
    
    traversePostorder(node->left);
    traversePostorder(node->right);
    cout << node->element << " ";
}
void BinarySearchTree::printPostOrder(){
    cout << "postorder: ";
    traversePostorder(root);
    cout << "\n";
}

//Delete
void BinarySearchTree::deleteNodes(BinaryTreeNode * & tempRoot){
    while(tempRoot != 0){
    remove(findMin(tempRoot)->element);
    deleteNodes(tempRoot);
    }
   
}
BinarySearchTree:: ~BinarySearchTree(){
    deleteNodes(root);
}


