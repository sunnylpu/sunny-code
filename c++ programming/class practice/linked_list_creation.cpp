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
void insert_at_tail(int data,Node* &tail){
    Node* node2=new Node(data);
    Node* temp=tail;
    tail->next=node2;
    node2=tail;
}

void node_to_insert(int data,int position,Node* &head){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
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

    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail= node1;

    insert_at_tail(10,tail);
    insert_at_tail(20,tail);
    display(tail);

    return 0;
}