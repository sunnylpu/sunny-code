#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    Node* insert_head(Node* head,int d){
        Node* new_node=new Node(d);

        new_node->next=head;

        return new_node;
    }

    void display(Node* head){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
        cout<<"NULL :"<<endl;


    }
};
int main(){

}