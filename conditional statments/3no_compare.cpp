#include <iostream>
using namespace std;
int main() {
    int n,m,o;
    cout<<"enter first number";
    cin>>n;
    cout<<"enter second number";
    cin>>m;
    cout<<"enter third number";
    cin>>o;
    if (n>m && n>o){
        cout<<"the greatest number is: "<<n;

    } else if (m>n && m>o){
        cout<<"the greatest number is: "<<m;
    } else if (o>n && o>m){
        cout<<"the greatest number is : "<<o;
    }else {
        cout<<"all numbers are equal";
    }
    return 0;
}
