#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
    root = 0;
}

 
//Insert
void BinarySearchTree::insert(int num, BinaryTreeNode * & tempRoot){


    if (tempRoot == 0 ) 
    {
       tempRoot = new BinaryTreeNode(num); 
       cout<<"yerleşti"<<endl;
    }
    else if (num > tempRoot->element) 
    {
        cout<< tempRoot->element <<" Küçüktür " << num <<endl;
        insert(num,tempRoot->right);
    }

    else if (num < tempRoot->element) 
    {
        cout<< tempRoot->element <<" Büyüktür " << num <<endl;
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

    if (tempRoot->element == num ) 
    {
       tempRoot = 0;
       cout<<"silindi"<<endl;
    }
    else if (num > tempRoot->element) 
    {
        cout<< tempRoot->element <<" Küçüktür " << num <<endl;
        remove(num,tempRoot->right);
    }

    else if (num < tempRoot->element) 
    {
        cout<< tempRoot->element <<" Büyüktür " << num <<endl;
        remove(num,tempRoot->left);
    }
    else{
    }
    
    
}
void BinarySearchTree::remove(int k){
    if (k>0)
    {
        remove(k,root);
    }
    
    
}


void BinarySearchTree::printInorder(){
    
}

void BinarySearchTree::printPreorder(){
    
}

void BinarySearchTree::printPostOrder(){
    
}