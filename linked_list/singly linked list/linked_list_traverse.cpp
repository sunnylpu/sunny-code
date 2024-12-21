#include <iostream>
using namespace std;

class ll {
public:
    int data;
    ll* next;

    ll(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void append(ll*& head, int value) {
    ll* newNode = new ll(value);
    if (!head) {
        head = newNode;
    } else {
        ll* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(ll* head) {
    ll* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    ll* head = NULL;

    append(head, 10);
    append(head, 20);
    append(head, 30);

    display(head);

    return 0;
}