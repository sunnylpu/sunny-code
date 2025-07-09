#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=NULL;
        right=nullptr;
    }
}

//inorder traversal
void inorder(Node* root){
    if(root==nullptr)return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

//preorder traversal

void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal

void postorder(Node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main(){

}