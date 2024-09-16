#include <iostream>
using namespace std;

// Define the Node structure
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to get the length of the linked list
int getLength(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Function to find the middle of the linked list
Node* findMiddle(Node* head) {
    int length = getLength(head);
    int ans = (length / 2);

    Node* temp = head;
    int count = 0;
    while (count < ans) {
        temp = temp->next;
        count++;
    }

    return temp;
}

int main() {
    // Create a sample linked list: 1->2->3->4->5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the middle node
    Node* middle = findMiddle(head);

    // Print the data of the middle node
    if (middle != NULL) {
        cout << "The middle node data is: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
