#include<iostream>
using namespace  std;
int factorial(int n){
    if (n == 0) return 1;
    else return n * factorial(n-1);
}

int nCr(int n,int r){
    int combination=factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}
int main() {
    int fact=factorial(5);
    cout<<fact;
    //cout << "Factorial of 5 is: " << fact;
   int n = 5 , r = 2 ;
    cout << "\nNumber of ways to choose r items from n items in a set is "<<nCr(n,r);
    return 0;
}