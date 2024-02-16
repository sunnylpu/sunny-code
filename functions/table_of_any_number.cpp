#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number for table: ";
    int n;
    cin>>n;
    cout<<"Enter the number at table end: ";
    int m;
    cin>>m;
    int i=1;
    while(i<=m){
        int o=i*n;
        // m=m+1;
        
        cout<<n<<" * "<<i<<" = "<<o<<endl;
        i=i+1;
    }
}