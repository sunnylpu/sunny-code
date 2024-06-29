#include<iostream>
using namespace std;

class node{
    public:
    int data; // data in node
    node* next; // address of the next node
    // how we use constructor in linked lists for giviing current address and data. 
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }

};
// insertion in a linked list
    void tailinsert(node* &tail,int d){
        node* node2=new node(d);
        tail ->next=node2;
        tail=node2;


    }
// pirnting a linked list and tranverse in a link list
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
    
}
int main(){
    // create a new node
    node* node1=new node(10);
    node* tail=node1;
    print(tail);
    tailinsert(tail,12);
    print(tail);
    tailinsert(tail,15);
    print(tail);
    
    return 0;
}