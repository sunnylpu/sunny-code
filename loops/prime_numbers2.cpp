#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=1;
    for (int i=2;i<=n;i++) {
    
        if (n%i==0){
            // cout<<"The number is not prime number."<<endl;
            isprime=0;
            break;
            }
    }
    if (isprime==0){
            cout<<"not a prime number: ";
        }
    else
       {
        cout<<"is a prime number: ";
    }
}