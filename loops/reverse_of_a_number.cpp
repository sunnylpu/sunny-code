#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reversed=0;
    while(n!=0){
        int digit=n%10;
        reversed=reversed*10 + digit;
        n=n/10;
        
    }cout<<"reverse is: "<<reversed;
}