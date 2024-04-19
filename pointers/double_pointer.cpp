#include<iostream>
using namespace std;
int main(){
    int i=0;
    int *prt=&i;
    int* *prt=&prt;
    cout<<"The value of variable 'i' is: " <<prt<<endl; //prints the address of prt instead of its content. Why?
}