#include <iostream>
using namespace std;
int main(){
    int n,j;
    cin>>n;
    for (int i=2;i<n;i++){
        for (int j=2;j<i;j++){
            if (i%j==0){
                    cout<<" ";
                    break;
                }
           }if (j==i){
            cout<<j;
           } 
    }
} 
