//Sum of all the nodes of the tree

#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countSum(Node* root){
   if(root==NULL){
       return -1;
   }
   return countSum(root->left) + countSum(root->right) + root->data;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->left->left = new Node(8);
    root->right->left->right = new Node(9);

    cout<<countSum(root);
    cout<<endl;

    
    return 0;
}