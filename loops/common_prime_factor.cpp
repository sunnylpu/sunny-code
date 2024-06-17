#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
            cout<< i<<" ";
        }
    }
    
}