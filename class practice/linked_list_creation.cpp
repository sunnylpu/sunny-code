#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(int data, Node* &head) {
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  

    insert_at_head(10, head);
    insert_at_head(20, head);
    insert_at_head(30, head);

    display(head);

    return 0;
}