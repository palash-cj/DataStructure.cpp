//Diameter is the distance between 2 leaves of the tree

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

int heightTree(Node* root){

    if(root==NULL){
        return 0;
    }

    return max(heightTree(root->left),heightTree(root->right)) + 1;
}

int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int lHeight = heightTree(root->left);
    int rHeight = heightTree(root->right);
    int currDiameter = max(lHeight,rHeight) + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));

}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
   

    cout<<calcDiameter(root)<<endl;
    return 0;
}