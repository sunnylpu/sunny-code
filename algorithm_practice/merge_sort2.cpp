#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    printArray(arr);

    sort(arr.begin(), arr.end()); // Use STL sort

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}