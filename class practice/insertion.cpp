#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, element, pos;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> element;
    cin >> pos;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
