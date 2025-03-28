#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number for table: ";
    int n;
    cin>>n;
    cout<<"Enter the number at table end: ";
    int m;
    cin>>m;
    for (int i=1;i<=m;m--){
        int o=n*m;
        cout<<o<<" = "<<m<<" * "<<n<<endl;
        // i++;
    }
    
    
    }
