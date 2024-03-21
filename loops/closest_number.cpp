#include <iostream>
#include <cmath>

int closestNumber(int N, int M) {
    // Divisible number closest to N
    int closest = (N / M) * M;

    // Check if absolute difference with (closest + M) is lesser
    // This handles both positive and negative cases
    if (abs(N - (closest + M)) < abs(N - closest)) {
        closest += M;
    }

    return closest;
}

int main() {
    // Sample Test Cases
    std::cout << closestNumber(13, 4) << std::endl;  // Output: 12
    std::cout << closestNumber(5, 3) << std::endl;   // Output: 6
    std::cout << closestNumber(-15, 6) << std::endl; // Output: -18

    return 0;
}
