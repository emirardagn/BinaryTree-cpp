#include <iostream>
#include <vector>
#include <string>
#include "BinaryTreeNode.cpp"
#include "BinarySearchTree.cpp"
using namespace std;


int main()
{   
    int inputNum;

    cout<< "Please Enter A Number" <<endl;
    cin>>inputNum;
    
    while (inputNum != -1) // add + remove
        
        {
        if (inputNum == -2) //remove
        {
            while (inputNum != -1)
            {
                cout<< "Please Enter The Number Which You Are Gonna Remove" <<endl;
                cin>>inputNum;



            }
            
        }
        
        else //add 
        {
            new BinaryTreeNode(inputNum);
            cout<< "Please Enter A Number" <<endl;
            cin>>inputNum;
            
        }


    }

 
}