#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;

    // Check if d is zero before entering the loop
    if (d == 0) {
        cout << "Common difference (d) cannot be zero." << endl;
        return 1; // Exit the program with an error code
    }

    int i = 1;
    while (i <= n) {
        cout << a + (i - 1) * d<<" ";
        i++;
    }

    return 0; // Indicate successful execution
}
