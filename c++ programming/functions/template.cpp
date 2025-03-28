#include <iostream>
using namespace std;

template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max (int): " << maxVal(10, 20) << endl;
    cout << "Max (double): " << maxVal(4.5, 3.2) << endl;
    cout << "Max (char): " << maxVal('A', 'Z') << endl;
    return 0;
}