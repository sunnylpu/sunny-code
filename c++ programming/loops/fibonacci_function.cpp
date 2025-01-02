#include <iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}