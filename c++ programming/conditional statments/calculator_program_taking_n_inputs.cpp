#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char choice;

    do {
        double num1, num2, result;
        char operation;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation (+, -, *, /, sqrt, ^): ";
        cin >> operation;

        // Check if the operation is a unary operation (e.g., sqrt)
        if (operation == 'sqrt') {
            if (num1 < 0) {
                cout << "Cannot calculate square root of a negative number." << endl;
                continue; // Skip the rest of the loop and ask for input again
            }
            result = sqrt(num1);
        } else {
            cout << "Enter second number: ";
            cin >> num2;

            switch (operation) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 == 0) {
                        cout << "Cannot divide by zero." << endl;
                        continue; // Skip the rest of the loop and ask for input again
                    }
                    result = num1 / num2;
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
                default:
                    cout << "Invalid operation." << endl;
                    continue; // Skip the rest of the loop and ask for input again
            }
        }

        cout << "Result: " << result << endl;

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0; // Exit successfully
}
