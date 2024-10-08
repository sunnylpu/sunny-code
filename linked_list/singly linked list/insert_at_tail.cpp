#include<iostream>
using namespace std;

class node{
    public:
    int data; // data in node
    node* next; // address of the next node
    // how we use constructor in linked lists for giviing current address and data. 

    // construsctor
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(this ->next!=NULL){
            delete next;
            this ->next=NULL;
        }
        cout<<endl<<"memory is free for node with data"<<value<<endl;
    }

};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp ->next=head;
    head=temp;

}

// insertion in a linked list
    void tailinsert(node* &tail,int d){
        node* node2=new node(d);
        tail ->next=node2;
        tail=node2;


    }
    void insertmiddle(node* &head,node* &tail,int position,int d){
        //insert at start by recursion
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
        tailinsert(tail,d);
        return;
    }
    // create a node for d
    node* nodetoinsert=new node(d);

    nodetoinsert -> next=temp ->next;
    temp->next=nodetoinsert;



}

// deleting a node at a  position

void delete1(int position,node* &head){
    // deleting start and forst node
    if(position==1){
        node*temp=head;
        head=head -> next;
        //memory free start node ki
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting middle and last node
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// pirnting a linked list and tranverse in a link list
void print(node* &head){
    node*temp=head;
    while(temp!= NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
    
}
int main(){
    // create a new node
    node* node1=new node(10);
    node* tail=node1;
    node* head=node1;
    print(tail);
    tailinsert(tail,12);
    print(tail);
    tailinsert(tail,15);
    print(tail);
    cout<<endl;
    insertmiddle(head,tail,1,11);
    print(head);
    cout<<endl;
     insertmiddle(head,tail,5,11);
    print(head);
    delete1(2,head);
    print(head);
    return 0;
}