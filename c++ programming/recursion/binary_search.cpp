#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;  // This is done to avoid overflow for large left and right values
        
        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is smaller than mid, then it can only be in the left subarray
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }
        
        // Else the target can only be in the right subarray
        return binarySearch(arr, mid + 1, right, target);
    }
    
    // Target is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    
    return 0;
}
