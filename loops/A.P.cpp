#include <iostream>
using namespace std;
int main(){
    int a, d, n;
    cin>>a >>d >>n;
    int i=1;
    while (i<=n){
        cout<<a + (i-1)*d<<endl;
        i++;
    }
    return 0;
}