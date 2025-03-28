#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"sum of the above numbers ; ";
    int sum=0;
    for (int i =1;i<=n;i++){
        sum+=i;
        cout<<i;
        cout<<endl;
        cout<<"sum of given input numbers; ";
          
    }
    cout<<"is "<<sum;
}