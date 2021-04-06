//Height of a tree is distance between root and deepest leave.

#include <iostream>
#include <queue>
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


//method 1
// int heightTree(Node* root){
//     if(root == NULL){
//         return -1;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     int height = 1;

//     while(!q.empty()){
//         Node* node = q.front();
//         q.pop();

//         if(node!=NULL){
           

//             if(node->left){
//                 q.push(node->left);
//             }
//             if(node->right){
//                 q.push(node->right); 
//             }
//         }

//         else if(!q.empty()){
//             q.push(NULL);
//             height++;
//         }
//     }
//     return height;

// }

//method 2
int heightTree(Node* root){

    if(root==NULL){
        return 0;
    }
    int lHeight = heightTree(root->left);
    int rHeight = heightTree(root->right);

    return max(lHeight,rHeight) + 1;
}

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    root->left->right->right = new Node(8);
    root->left->left->right = new Node(9);

    

    cout<<"Height of given tree is "<<heightTree(root)<<endl;

    return 0;
}