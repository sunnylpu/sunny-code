#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int array[rows][cols];
    cout << "Enter the elements of the " << rows << " x " << cols << " array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }
    int negativeCount[cols] = {0};
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (array[i][j] < 0) {
                negativeCount[j]++;
            }
        }
    }
    cout << "Negative numbers count in each column:\n";
    for (int j = 0; j < cols; ++j) {
        cout << "Column " << j + 1 << ": " << negativeCount[j] << endl;
    }
    return 0;
}
