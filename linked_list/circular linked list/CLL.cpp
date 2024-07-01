#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int d){
        this -> data=d;
        this->next=NULL;
    }

    //destructor
    ~node()
};
int main(){

}