#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum; // Reset num to the original value

    // Calculate the sum of digits each raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNum);
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
