#include<iostream>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int size;
    int top;

    //behaviour
    //constructor
    Stack(){
        this->size=size;
         arr=new int[size];
         top=-1;
    }


    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow "<<endl;
        }
    }

    int peek(){


    }

    bool isempty(){

    }
};
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}