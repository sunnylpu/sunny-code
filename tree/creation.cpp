#include<iostream>
using namespace std;


// creation of binary tree
class node{

    public:
    int data;
    node* left;
    node* right;

    // constructor

    node(int d){
        this ->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    else{
        cout<<"Enter for left node "<<endl;
        root->left=buildtree(root->left);
    }
}


int main(){
node* root=NULL;

root=buildtree(root);
}