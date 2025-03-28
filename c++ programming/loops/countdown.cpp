#include <iostream>

void countdown(int n) {
    for (int i = n; i >= 1; i--) {
        std::cout << i;
        if (i > 1) {
            std::cout << "-";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of seconds left: ";
    std::cin >> n;
    std::cout << "Countdown sequence:" << std::endl;
    countdown(n);
    return 0;
}
