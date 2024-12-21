#include <iostream>
using namespace std;

// Define an inline function to add two numbers
inline int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 3, b = 5;

    // Call the inline function
    int result = add(a, b);
    cout << "The sum is: " << result << endl;  // Output: The sum is: 8

    return 0;
}