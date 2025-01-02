#include<iostream>
using namespace std;
int main() {
    int n, m, a[105], b[105];
    cin >> n >> m;
    for(int i = 1; i <= min(n, m); ++i) {
        a[i] = i;
        b[i] = i + (m - n + 1) * (min(n, m) - i + 1);
    }
    if(n > m)
        for(int i = min(n, m) + 1; i <= n; ++i)
            a[i] = a[i - 1] + m - n +  1;
    else
        for(int j = min(n, m) + 1; j <= m; ++j)
            b[j] = b[j - 1] + n - m;
            cout << "A: ";
    for(int i = 1; i <= max(n, m); ++i)
        cout << a[i] << ' ';
    cout << "\nB: ";
    for(int i = 1; i <= max(n, m); ++i)
        cout << b[i] << ' ';
    return 0;
}