#include <iostream>
using namespace std;

class ll {
public:
    int data;
    ll* next;
    int element;

    ll(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void searching(ll* &head,int element){
    ll* temp=head;
    if(temp==NULL){
        return;
    }

    while(temp!=NULL){
        if(element==head->data){
            cout<<"element found:"<<endl;
        }
        else{
            searching(head->next,element);
        }
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

    display(head);

    return 0;
}