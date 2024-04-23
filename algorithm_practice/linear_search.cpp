#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int key = 10;

    int linearResult = linearSearch(arr, key);
    if (linearResult != -1)
        cout << "Element found at index " << linearResult << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
