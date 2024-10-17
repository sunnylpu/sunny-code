#include <iostream>
#include <queue>
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
};

node* buildTree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        // Push left child if it exists
        if (temp->left) {
            q.push(temp->left);
        }

        // Push right child if it exists
        if (temp->right) {
            q.push(temp->right);
        }
    }
    cout << endl;
}

int main() {
    node* root = NULL;

    // Create the tree
    root = buildTree(root);
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Print level order traversal
    cout << "Printing the level order traversal output: " << endl;
    levelOrderTraversal(root);

    return 0;
}