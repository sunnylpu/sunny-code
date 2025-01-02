#include <iostream>
#include <iomanip>
#include <cmath>

double factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int x, n;
    double sum = 1.0;

    std::cout << "Enter the base value (x) and the number of terms (n): ";
    std::cin >> x >> n;

    for (int i = 1; i <= n; ++i) {
        sum += pow(x, i) / factorial(i);
    }

    std::cout << std::fixed << std::setprecision(2) << sum << std::endl;

    return 0;
}
