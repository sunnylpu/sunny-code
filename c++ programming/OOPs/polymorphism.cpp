#include<iostream>
using namespace std;

class p{
    public:
    int a;
    int b;
     
    public:
     int add(){
        return a+b;
     }

     void operator+ (p &obj){
        int value1=this -> a;
        int value2=obj.a;
        cout<<" output "<<value2-value1<<endl ;
     }
     void operator() (){
        cout<<"this is a ooperator overloading "<<this-> a<<endl;
     }

};
int main(){
    p obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1 + obj2;
    obj1();
}