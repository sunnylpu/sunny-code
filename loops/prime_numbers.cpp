#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: "
    <<endl;
    int i=2;
    int n;
    cin>>n;
    if (n==1) {cout<<" not a prime number"<<endl;}
    
    else { for (n%i==0;i++;) {
        if (n%i==n)
        break;
    }
          
    cout<<"not a prime number";}
    return 0;
}