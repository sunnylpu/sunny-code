#include <iostream>
using namespace std;

// Function to check if the given number is the sum of three consecutive numbers
bool isSumOfThreeConsecutive(int num) {
    for (int i = 1; i <= num / 3; i++) {
        int sum = i + (i + 1) + (i + 2);
        if (sum == num) {
            return true; // True, sum is found
        }
    }
    return false; // False, sum is not found
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSumOfThreeConsecutive(num)) {
        cout << num << " is the sum of three consecutive numbers." << endl;
    } else {
        cout << num << " is not the sum of three consecutive numbers." << endl;
    }

    return 0;
}
