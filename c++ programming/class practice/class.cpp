#include <iostream>
#include <algorithm> // For sort, reverse, find, max_element, min_element
#include <numeric>   // For accumulate
using namespace std;

int main() {
    int n;

    // Input size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];
    
    // Input elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1. Sorting the array in ascending order
    sort(arr, arr + n);
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Sorting the array in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Reversing the array
    reverse(arr, arr + n);
    cout << "Array after reversing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Finding the minimum element
    int minElem = *min_element(arr, arr + n);
    cout << "Minimum element: " << minElem << endl;

    // 5. Finding the maximum element
    int maxElem = *max_element(arr, arr + n);
    cout << "Maximum element: " << maxElem << endl;

    // 6. Calculating the sum of all elements
    int sum = accumulate(arr, arr + n, 0);
    cout << "Sum of all elements: " << sum << endl;

    // 7. Searching for an element (find function)
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    
    auto it = find(arr, arr + n, key);
    if (it != arr + n) {
        cout << "Element " << key << " found at index " << distance(arr, it) << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    // 8. Checking if array is sorted
    bool isSorted = is_sorted(arr, arr + n);
    cout << "Is the array sorted? " << (isSorted ? "Yes" : "No") << endl;

    return 0;
}