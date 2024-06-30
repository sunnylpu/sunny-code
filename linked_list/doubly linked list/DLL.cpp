// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
    
//     // constructor
//     node(int d){
//         this -> data=d;
//         this -> prev=NULL;
//         this -> next=NULL;
//     }
// };
// void print(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp -> data<<" ";
//         temp=temp -> next;
//     }
    

// }
// int getLen(node* head){
//      node* temp=head;
//      int count=0;
//     while(temp!=NULL){
//         temp=temp -> next;
//         count++;
//     }
//     return count;
// }

// void insertathead(node* &head,node* &tail,int d){

//     //empty list
//     if(head==NULL){
//         node* temp=new node(d);
//         temp=head;
//         temp=tail;

//     } else{
//     node* temp=new node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;}

// }
// void insertattail(node* &head,node* &tail,int d){

//     //empty tail
//     if(tail==NULL){
//         node*temp=new node(d);
//         temp=tail;
//         temp=head;
//     }else{
//     node* temp=new node(d);
//     tail->next=temp;
//     temp ->prev=tail;
//     tail=temp;  }
// }
// void insertatpostion(node* &head,node* &tail,int position,int d){
//      if(position==1){
//                 insertathead(head,tail,d);
//                 return;
//         }
//     node* temp=head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }

//     //inserting at last position
//     if(temp -> next==NULL){
//         insertattail(head,tail,d);
//         return;
//     }
//     // create a node for d
//     node* nodetoinsert=new node(d);

//     nodetoinsert -> next=temp ->next;
//     temp ->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert -> prev=temp;
//     //temp->next=nodetoinsert;
// }
// int main(){
//     node* head=NULL;
//     node* tail=NULL;
    
//     print(head);
//     cout<<head-> next<<endl;
//     cout<<head-> prev<<endl;

//     insertathead(head,tail,11);
//     print(head);
//     insertattail(head,tail,12);
//     print(tail);

//     insertatpostion(head,tail,1,32);
//     print(head);
// }
#include<iostream>
using namespace std;

// Node class representing each element in the doubly linked list
class node {
    public:
    int data;
    node* next;
    node* prev;
    
    // Constructor to initialize a new node
    node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to print the doubly linked list
void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    cout << endl; // Print a newline at the end
}

// Function to get the length of the doubly linked list
int getLen(node* head) {
    node* temp = head;
    int count = 0;
    while(temp != NULL) {
        temp = temp->next; // Move to the next node
        count++; // Increment the count
    }
    return count; // Return the length of the list
}

// Function to insert a node at the head (beginning) of the list
void insertathead(node* &head, node* &tail, int d) {
    node* temp = new node(d); // Create a new node

    // If the list is empty, both head and tail will point to the new node
    if(head == NULL) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head; // Link the new node to the existing head
        head->prev = temp; // Link the existing head back to the new node
        head = temp; // Update the head to the new node
    }
}

// Function to insert a node at the tail (end) of the list
void insertattail(node* &head, node* &tail, int d) {
    node* temp = new node(d); // Create a new node

    // If the list is empty, both head and tail will point to the new node
    if(tail == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp; // Link the existing tail to the new node
        temp->prev = tail; // Link the new node back to the existing tail
        tail = temp; // Update the tail to the new node
    }
}

// Function to insert a node at a specific position in the list
void insertatposition(node* &head, node* &tail, int position, int d) {
    // If inserting at the head
    if(position == 1) {
        insertathead(head, tail, d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    // Traverse to the node just before the desired position
    while(cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // If inserting at the last position
    if(temp->next == NULL) {
        insertattail(head, tail, d);
        return;
    }

    // Create a new node for the data
    node* nodetoinsert = new node(d);

    nodetoinsert->next = temp->next; // Link new node to the next node
    temp->next->prev = nodetoinsert; // Link the next node back to the new node
    temp->next = nodetoinsert; // Link the previous node to the new node
    nodetoinsert->prev = temp; // Link the new node back to the previous node
}

int main() {
    node* head = NULL; // Initialize head to NULL
    node* tail = NULL; // Initialize tail to NULL

    // Insert at head and print the list
    insertathead(head, tail, 11);
    print(head);
    
    // Insert at tail and print the list
    insertattail(head, tail, 12);
    print(head);

    // Insert at position 1 and print the list
    insertatposition(head, tail, 1, 32);
    print(head);

    // Insert at position 2 and print the list
    insertatposition(head, tail, 2, 45);
    print(head);

    return 0;
}
