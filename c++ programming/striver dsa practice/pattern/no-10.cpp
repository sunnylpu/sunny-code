#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n - 1; i >= 1; i--) { // Corrected loop
        for(int j = 0; j < i; j++) { // Print stars in decreasing order
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    nStarTriangle(n);
}