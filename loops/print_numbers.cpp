#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    string arr_num[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    if (a <= 9 && b > 9) {
        for (int i=a; i<10;i++) {
            std::cout << arr_num[i-1] << endl;
        }
    } else if (a <= 9 && b <= 9) {
        for (int k=a; k<=b;k++) {
            std::cout << arr_num[k-1] << endl;
        }
    }
    if (b > 9) {
        for (int j=10; j <= b; j++) {
            std::cout << ((j%2==0)?"even":"odd") << endl;
        }
    }
    
    return 0;
}