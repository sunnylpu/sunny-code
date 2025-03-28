#include<iostream>
using namespace std;
void update(int p2){
        p2=p2 +1;
        cout<<"The updated value of p2 is: " <<p2<<endl;


        
        
    }
int main(){
    
    int i=5;
    int* prt=&i;
    int** prt2=&prt;
    cout<<"The value of variable 'i' is: " <<i<<endl; //prints the address of prt instead of its content. Why?
    cout<<"The value of variable 'i' is: " <<*prt<<endl; //prints the address of prt instead of its content. Why?
    cout<<"The value of variable 'i' is: " <<**prt2<<endl; //prints the address of prt instead of its content. Why?
    
    //address printing of the variables//


    cout<<"The value of variable 'i' is: " <<&i<<endl; //prints the address of prt instead of its content. Why?
    cout<<"The value of variable 'i' is: " <<prt<<endl; //prints the address of prt instead of its content. Why?
    cout<<"The value of variable 'i' is: " <<*prt2<<endl; //prints the address of prt instead of its content. Why?
}