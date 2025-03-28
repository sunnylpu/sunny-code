#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation;

    // Input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Input the arithmetic operation
    printf("Enter arithmetic operation (+, -, *): ");
    scanf(" %c", &operation);

    // Switch-case statement for operation selection
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Invalid arithmetic operation. Please enter +, -, or *.\n");
            break;
    }

    return 0;
}
