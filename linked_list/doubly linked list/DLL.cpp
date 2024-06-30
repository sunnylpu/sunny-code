#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    // constructor
    node(int d){
        this -> data=d;
        this -> prev=NULL;
        this -> next=NULL;
    }
};
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp=temp -> next;
    }
    cout<<endl;

}
int getLen(node* head){
     node* temp=head;
     int count=0;
    while(temp!=NULL){
        temp=temp -> next;
        count++;
    }
    return count;
}

void insertatnode(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
int main(){
    node* node1=new node(10);
    node* head=node1;
    print(head);
    cout<<head-> next<<endl;
    cout<<head-> prev<<endl;

    insertatnode(head,11);
    print(head);
}