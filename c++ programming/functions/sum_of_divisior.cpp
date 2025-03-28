#include<iostream>
using namespace std;
void sum_of_divisiors(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }cout<<sum;
}
int main(){
    int m;
    cin>>m;
    sum_of_divisiors(m);
    return 0;
}