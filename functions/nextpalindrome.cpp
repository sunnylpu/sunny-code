#include <iostream>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reverseNum;
}

// Function to find the next smallest palindrome
int findNext(int n) {
    while (true) {
        if (isPalindrome(n)) {
            return n;
        }
        n++;
    }
}

int main() {
    // Input: Get the number from the user
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;

    // Find the next smallest palindrome greater than or equal to N
    int result = findNext(N);

    // Output: Display the next smallest palindrome
    std::cout << "Next smallest palindrome: " << result << std::endl;

    return 0;
}
