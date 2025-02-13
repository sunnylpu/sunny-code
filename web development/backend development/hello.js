// bst.js

// Class representing a node in the Binary Search Tree
class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

// Class representing the Binary Search Tree
class BinarySearchTree {
    constructor() {
        this.root = null;
    }

    // Function to insert a new node into the tree
    insert(data) {
        const newNode = new Node(data);
        if (this.root === null) {
            this.root = newNode;
        } else {
            this.insertNode(this.root, newNode);
        }
    }

    // Helper function to insert a node at the correct position
    insertNode(node, newNode) {
        if (newNode.data < node.data) {
            if (node.left === null) {
                node.left = newNode;
            } else {
                this.insertNode(node.left, newNode);
            }
        } else {
            if (node.right === null) {
                node.right = newNode;
            } else {
                this.insertNode(node.right, newNode);
            }
        }
    }

    // Function to perform in-order traversal of the tree
    inOrderTraversal(node) {
        if (node !== null) {
            this.inOrderTraversal(node.left);
            console.log(node.data);
            this.inOrderTraversal(node.right);
        }
    }

    // Wrapper function to start in-order traversal from the root
    inOrder() {
        this.inOrderTraversal(this.root);
    }
}

// Main function to test the BST
function main() {
    const bst = new BinarySearchTree();
    
    // Inserting nodes into the BST
    bst.insert(15);
    bst.insert(25);
    bst.insert(10);
    bst.insert(7);
    bst.insert(22);
    bst.insert(17);
    bst.insert(13);
    bst.insert(5);
    bst.insert(9);
    bst.insert(27);
    
    console.log('In-order traversal of the BST:');
    bst.inOrder();
}

// Execute the main function
main();