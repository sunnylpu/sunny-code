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

void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp ->prev=tail;
    tail=temp;  
}
void insertatpostion(node* &head,node* &tail,int position,int d){
     if(position==1){
                insertathead(head,d);
                return;
        }
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp -> next==NULL){
        insertattail(tail,d);
        return;
    }
    // create a node for d
    node* nodetoinsert=new node(d);

    nodetoinsert -> next=temp ->next;
    temp ->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert -> prev=temp;
    //temp->next=nodetoinsert;
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    node* nodetoinsert=node1;
    print(head);
    cout<<head-> next<<endl;
    cout<<head-> prev<<endl;

    insertathead(head,11);
    print(head);
    insertattail(tail,12);
    print(tail);

    insertatpostion(head,tail,3,32);
    print(head);
}