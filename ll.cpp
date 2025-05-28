#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data ){
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(node* &head,int data){
    node* temp=new node(data); 
    temp->next=head;
    head=temp;
}

void insertattail(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void insertatmiddle(int position , int data,node* &head){
    node* temp = head;
    int count = 1;
    while(count< position-1){
        temp=temp->next;
    }

    node* nodetoinsert= new node(data);
    
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
       cout<<endl;// for good visibility
}
int main(){

    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,13);
    print(head);
}