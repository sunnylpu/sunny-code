



// floyd detection cycle
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

void removeLoop(Node* loopNode, Node* head) {
    Node* ptr1 = head;
    Node* ptr2 = NULL;
    while (1) {
        ptr2 = loopNode;
        while (ptr2->next != loopNode && ptr2->next != ptr1) {
            ptr2 = ptr2->next;
        }
        if (ptr2->next == ptr1) {
            break;
        }
        ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
}

bool detectAndRemoveLoop(Node* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            removeLoop(slow, head);
            return true;
        }
    }

    return false;
}

void printList(Node* head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a loop for testing
    head->next->next->next->next->next = head->next->next;

    if (detectAndRemoveLoop(head)) {
        std::cout << "Loop detected and removed." << std::endl;
    } else {
        std::cout << "No loop detected." << std::endl;
    }

    printList(head);

    return 0;
}
