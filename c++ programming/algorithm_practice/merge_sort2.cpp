#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print the array
void printArray(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) { // Avoid range-based loops for older standards
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    // Initializing the vector using push_back for older compatibility
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    cout << "Original array: ";
    printArray(arr);

    // Sort the vector
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}