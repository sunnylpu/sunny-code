#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
void primeFactors(int n, int m) {
    while (isPrime(m)) {
        cout << m << " ";
        n /= m;
        m = n;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << a << "*";
    primeFactors(a, b);
    cout << "\n" << b << "*";
    primeFactors(b, a);
    return 0;
}