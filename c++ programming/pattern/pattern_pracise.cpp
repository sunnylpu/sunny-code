#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    a=1;
    for(int i=0;i<n;i++){
        for(int j=a;j<n+a;j++){
            cout<<a;
        }cout<<endl;
        a=a+n;
    }
}