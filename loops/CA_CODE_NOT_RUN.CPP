#include <iostream>
using namespace std;

int main() {
    int n, a, b, x = 0, count = 0, digit, rem;
    
    cout << "Enter n, a, and b: ";
    cin >> n >> a >> b;
    
    for (int i = a; i < b; i++) {
        x = x * 10 + i;
    }
    
    while (x != 0) {
        digit = x % 10;
        
        int temp = n;
        while (temp != 0) {
            rem = temp % 10;
            if (rem == digit) {
                count++;
            }
            temp /= 10;
        }
        
        x /= 10;
    }
    
    cout << count + 2 << endl;
    
    return 0;
}
