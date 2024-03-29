#include<iostream>
using namespace std;
int main(){
    int a=1, b=100;
    for(int i=a;i<=b;i++){
         int even=i%2==0;
         if(even) {cout<<"Even: "<<i<<endl;}
    }
}
    
