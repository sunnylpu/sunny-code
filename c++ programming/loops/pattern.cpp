#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << col << " ";  // Print the column number instead of row
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
