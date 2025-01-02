#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;
    int result = fibo(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;
}
