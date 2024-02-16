#include <iostream>
using namespace std;
int factorial(int n){
     int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
        
    }
    return fact;
}
int nCr(int n,int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
        return comb;
}  
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"nCr of n , r is: "<<nCr(n,r);
    return 0;
}