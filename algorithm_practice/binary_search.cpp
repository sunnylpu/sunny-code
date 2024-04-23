#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int key = 10;

    int binaryResult = binarySearch(arr, key);
    if (binaryResult != -1)
        cout << "Element found at index " << binaryResult << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
