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
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp ->next=head;
    head=temp;

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
    cout<<node1 -> data<<endl;
    cout<<node1 -> next <<endl;
    // head pointed to new node
    node* head=node1;
    print(head);
    cout<<endl;
    //insertion
    insertathead(head,12);
    //pirnt after inserion
    print(head);
    cout<<endl;
    insertathead(head,15);
    print(head);

    return 0;
}