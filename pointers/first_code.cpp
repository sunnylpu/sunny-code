#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    cout<<&num<<endl;
    int *ptr=&num;
    cout<<"value is :"<<*ptr<<endl;
    (*ptr)++;
    cout<<"value is :"<<*ptr<<endl;
    cout<<"size of integer: "<<sizeof(num)<<endl;
    cout<<"size of pointer: "<<sizeof(ptr)<<endl;
    return 0;
}