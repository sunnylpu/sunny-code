#include <iostream>
#include <algorithm> // For using std::swap
using namespace std;

void bubble_sort(int *arr, int size) {
    if (size == 0 || size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort(arr, size - 1);
}

int main() {
    int arr[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) { // Corrected loop to read all elements
        cin >> arr[i];
    }

    bubble_sort(arr, size);

    for (int i = 0; i < size; i++) { // Loop to print sorted array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
