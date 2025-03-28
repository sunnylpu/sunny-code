#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double m = 1.1, n = 2.2;
    cout << "Before swap: m = " << m << ", n = " << n << endl;

    swapValues(m, n);
    cout << "After swap: m = " << m << ", n = " << n << endl;

    return 0;
}