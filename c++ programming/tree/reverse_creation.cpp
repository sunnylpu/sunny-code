#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    cout<<" enter the data ";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

     root=new node(data);

    // now insert in the left node
    cout<<" enter in the left node of "<<data<<endl;
    root->left=buildtree(root->left);

    // now insert in the right node
    cout<<" enter in the left node of "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}
int main(){
    node* root=NULL;
    buildtree(root);
}