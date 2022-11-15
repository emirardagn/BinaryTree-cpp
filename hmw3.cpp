#include <iostream>
#include <vector>
#include <string>
#include "BinaryTreeNode.cpp"
#include "BinarySearchTree.cpp"
using namespace std;


int main()
{   
    int inputNum;

    BinarySearchTree *myTree = new BinarySearchTree();


    cout<< "Please Enter A Number" <<endl;
    cin>>inputNum;

    while (inputNum != -1) // add + remove
        
        {
        if (inputNum == -2) //remove
        {
            while (inputNum != -1)
            {
                myTree->remove(inputNum);
                cout<< "Please Enter The Number Which You Are Gonna Remove" <<endl;
                cin>>inputNum;
            }
            
        }
        
        else //add
        {
            myTree->insert(inputNum);
            cout<< "Please Enter A Number" <<endl;
            cin>>inputNum;

        }


    }


}