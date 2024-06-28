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

};
int main(){
    
}