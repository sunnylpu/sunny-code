#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Enter number which you want to print after that enter number how many time you print that number";
    cin >> n >> m;
    if (n>=m) cout << "Enter second number smaller than first";
    else for(n<=m;n++)  cout << n << endl;
    return 0;
}