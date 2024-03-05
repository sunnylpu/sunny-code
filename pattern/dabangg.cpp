#include <iostream>

int main() {
    int j;
    std::cout << "Enter num: ";
    std::cin >> j;

    for (int n = j; n > 0; --n) {
        // Print increasing numbers
        for (int k = 1; k <= n; ++k) {
            std::cout << k;
        }

        // Print spaces
        for (int space = 0; space < (j - n); ++space) {
            std::cout << "*";
        }

        // Print decreasing numbers
        for (int k = n; k > 0; --k) {
            std::cout << k;
        }

        std::cout << std::endl;
    }

    return 0;
}
