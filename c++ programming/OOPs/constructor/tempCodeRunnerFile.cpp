#include<iostream>
using namespace std;

class A{
    public:
    int sum=0;
    A();
    A(int a,int x=0){
        sum=a+x;
    }

    void print(){
        cout<<" sum = "<<sum<<endl;
    }
};
int main(){
    A sunny(5);
    sunny.print();

    A sunny2(10,5);
    sunny2.print();
    return 0;
}