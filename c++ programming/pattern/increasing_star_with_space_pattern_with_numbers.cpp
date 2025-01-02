#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=1;        
    while(row<=n){
        int col=1;
        int k=row-1;
        while(k){
        cout<<" ";
        k=k-1;}
        //for space
        while(col<=n){
             
            cout<<count;
            col=col+1;
        }
    cout<<endl;
    row=row+1;
    count=count+1;
    }
}