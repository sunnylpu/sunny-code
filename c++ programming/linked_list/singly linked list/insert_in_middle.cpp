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
void insertmiddle(node* &head,int position,int d){
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // create a node for d
    node* nodetoinsert=new node(d);

    nodetoinsert -> next=temp ->next;
    temp->next=nodetoinsert;



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
   
    
    
    return 0;
}