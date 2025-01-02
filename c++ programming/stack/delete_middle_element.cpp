#include<iostream>
#include<stack>
using namespace std;
class Stack{
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];   
    }

    public:

    void solve(stack<int> &s,int count,int size){
        //base case
        if(count==size/2){
            s.pop();
            return;
        }

        //process
        int num=s.top();
        s.pop();

        //recursive call

        solve(s,count+1,size);
        s.push(num);

    }
    int delete_middle(stack<int>& s,int n){
        int count=0;
        solve( s, count, size);
    }
};
int main(){
stack<int> s;
}