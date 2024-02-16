#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int k=n-row;
        while(k){
        cout<<" ";
        k=k-1;}
        //for space
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
    cout<<endl;
    row=row+1;
    }
}