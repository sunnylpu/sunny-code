#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1, j=1;
    while(i<=n){
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;
}