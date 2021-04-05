//Counting all the nodes  of the tree

#include <iostream>
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

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
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

    cout<<countNodes(root);
    cout<<endl;
    return 0;
}
