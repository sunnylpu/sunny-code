#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL; 
    }

    node* insertintobst(node* root, int data) {
        if (root == NULL) {
            root = new node(data);
            return root;
        }
        if (data > root->data) {
            root->right = insertintobst(root->right, data);
        } else {
            root->left = insertintobst(root->left, data);
        }
        return root;
    }

    void takeinput(node* &root) {
        int data;
        cin >> data;

        while (data != -1) {
            root = insertintobst(root, data);
            cin >> data;
        }
    }
};

int main() {
    node* root = NULL;
    node tree(0);
    tree.takeinput(root);
}