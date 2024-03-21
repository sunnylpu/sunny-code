#include <stdio.h>

// Function to convert decimal to octal
void decimalToOctal(int decimalNumber) {
    int octalNumber = 0;
    int placeValue = 1;

    while (decimalNumber > 0) {
        // Extract the last digit
        int remainder = decimalNumber % 8;

        // Add the digit to the octal number
        octalNumber = octalNumber + remainder * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Remove the last digit from the decimal number
        decimalNumber /= 8;
    }

    // Output: Display the octal number
    printf("Octal equivalent: %d\n", octalNumber);
}

int main() {
    // Input: Get the decimal number from the user
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to octal
    decimalToOctal(decimalNumber);

    return 0;
}
