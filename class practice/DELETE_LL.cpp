#include <iostream>


struct Node {
    int data;           
    Node* next;        
        Node(int val) : data(val), next(nullptr) {}
};


Node* delete1(Node* head,int valu){
    Node* temp=head;

    if(head->next=NULL){
       
    }


}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Creating nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Print the linked list
    printList(head);

    // Free allocated memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}