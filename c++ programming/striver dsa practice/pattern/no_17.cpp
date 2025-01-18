#include<iostream>
using namespace std;
void alphahill(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char num='A';
        for(int j=0;j<2*i+1;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    alphahill(n);
    char num1='A' + n;
    cout<<endl<<num1;
}