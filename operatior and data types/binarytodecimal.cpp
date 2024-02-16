#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int bit=n%2;
        bit/=2;
        i++;
        cout<<bit;
    }
}