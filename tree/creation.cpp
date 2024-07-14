#include <iostream>
#include <queue>
using namespace std;

// Definition of the node class for the binary tree
class node {
public:
    int data;
    node* left;
    node* right;

    // Constructor
    node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Function to build the binary tree
node* buildtree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    if (data == -1) {
        return nullptr;
    }

    root = new node(data);

    // Insertion in the left node
    cout << "Enter data for left node of " << data << endl;
    root->left = buildtree(root->left);

    // Insertion in the right node
    cout << "Enter data for right node of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

// Function for level order traversal
void levelordertraversal(node* root) {
    if (root == nullptr) {
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == nullptr) { // End of current level
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    node* root = nullptr;
    root = buildtree(root);

    // Level order traversal
    cout << "Level order traversal of the tree:" << endl;
    levelordertraversal(root);

    return 0;
}
