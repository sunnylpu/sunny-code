#include<iostream>
using namespace std;

long long Min_Sum(long long arr[], int n) {
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += arr[i];
    }
    return ans;
}

long long Max_Sum(long long arr[], int n) {
    long long ans = 0;
    for (int i = 1; i < n; i++) {
        ans += arr[i];
    }
    return ans;
}

int main() {
    int size;
    cin >> size;

    // Limit the array size to a reasonable number
    const int MAX_SIZE = 100000;
    long long ar[MAX_SIZE];

    for (int i = 0; i < size; i++) {
        cin >> ar[i];
    }

    long long minSum = Min_Sum(ar, size);
    long long maxSum = Max_Sum(ar, size);

    cout  << minSum << endl;
    cout  << maxSum << endl;

    return 0;
}
