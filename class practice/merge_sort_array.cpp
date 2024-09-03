#include <iostream>
#include <algorithm>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 34, 7, 23, 32, 5, 62};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target number: ";
    cin >> target;

    int linearResult = linearSearch(arr, size, target);
    if (linearResult != -1) {
        cout << "Linear Search: Target found at index " << linearResult << endl;
    } else {
        cout << "Linear Search: Target not found" << endl;
    }

    sort(arr, arr + size);

    int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1) {
        cout << "Binary Search: Target found at index " << binaryResult << " (after sorting)" << endl;
    } else {
        cout << "Binary Search: Target not found" << endl;
    }

    return 0;
}