#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int index) {
    // Check if index is valid
    if (index < 0 || index >= size) {
        cout << "Index out of range" << endl;
        return;
    }
    
    // Shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Reduce the size of the array
    size--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5; // Current number of elements in the array

    cout << "Original array: ";
    printArray(arr, size);

    int indexToDelete;
    cout << "Enter index of element to delete: ";
    cin >> indexToDelete;

    deleteElement(arr, size, indexToDelete);

    cout << "Array after deletion: ";
    printArray(arr, size);

    return 0;
}
