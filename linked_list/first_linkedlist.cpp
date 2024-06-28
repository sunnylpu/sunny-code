#include <iostream>
#include <string>

// Node class to represent each node in the linked list
class Node {
public:
    std::string name;
    Node* next;

    // Constructor to initialize the node with a name and set next to NULL
    Node(std::string n) {
        name = n;
        next = nullptr;
    }
};

int main() {
    // Create a node with the name "Sunny"
    Node* node1 = new Node("Sunny");

    // Print the name and next value of the node
    std::cout << "Node name: " << node1->name << std::endl;
    std::cout << "Next node: " << node1->next << std::endl;

    // Clean up the allocated memory
    delete node1;

    return 0;
}
