#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;


    unsigned long long* factorial = new unsigned long long(1);  
    
    for (int i = 1; i <= n; ++i) {
        *factorial *= i;
    }

    // Display the result
    cout << "Factorial of " << n << " is: " << *factorial << endl;

    
    
    delete factorial;

    return 0;
}