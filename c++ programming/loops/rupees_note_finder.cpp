#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    switch (n,k)
    {
    case n: 
     k=n/100;
    cout<<k<<endl; 
        break;
    case k: 
    int l=n/50;
    cout<<l<<endl;

        break;

    default:cout<<"amount should not be suitable for calculation: "<<endl;
        break;
    }
}