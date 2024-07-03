#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* floyd_loop_detection(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow pointer by one
        fast = fast->next->next;    // Move fast pointer by two

        if (slow == fast) {         // Check if they meet
            return slow;
        }
    }

    return NULL;
}

Node* getstartingnode(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* intersection = floyd_loop_detection(head);
    if (intersection == NULL) {
        return NULL; // No loop
    }

    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow; // Start of the loop
}

Node* removeLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* startOfLoop = getstartingnode(head);
    if (startOfLoop == NULL) {
        return head; // No loop to remove
    }

    Node* temp = startOfLoop;

    // Find the node just before the start of the loop
    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    // Break the loop
    temp->next = NULL;

    return head;
}

// Utility function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Utility function to create a loop in the linked list
void createLoop(Node* head, int k) {
    Node* temp = head;
    Node* loopNode = NULL;

    int count = 1;
    while (temp->next != NULL) {
        if (count == k) {
            loopNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = loopNode; // Creating the loop
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Create a loop for testing
    createLoop(head, 3);

    // Detect and remove the loop
    head = removeLoop(head);

    // Print the modified list
    printList(head);

    return 0;
}
