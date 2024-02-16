#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans = ans + digit;
        cout<<ans<<endl;
        n /= 10;
        

    }

}