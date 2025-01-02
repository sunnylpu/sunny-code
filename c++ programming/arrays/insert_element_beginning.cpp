#include <iostream>
using namespace std;

// Function to insert element at the beginning of the array
void insertAtBeginning(int arr[], int& size, int element) {
    // Shift all elements to the right
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the element at the beginning
    arr[0] = element;
    // Increase the size of the array
    size++;
}

// Function to display elements of the array
void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size = 0;
    
    // Inserting some elements initially
    insertAtBeginning(arr, size, 5);
    insertAtBeginning(arr, size, 10);
    insertAtBeginning(arr, size, 15);

    cout << "Array after initial insertions: ";
    displayArray(arr, size);

    // Inserting a new element at the beginning
    int element;
    cout << "Enter the element to insert at the beginning: ";
    cin >> element;
    insertAtBeginning(arr, size, element);

    cout << "Array after insertion at the beginning: ";
    displayArray(arr, size);

    return 0;
}
