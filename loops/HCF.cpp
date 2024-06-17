#include<iostream>
using namespace std;
int main()
{
    int a, b, r, hcf;
    cout << "Enter a two numbers: " << endl;
    cin >> a >> b;
    while (true)
    {
        hcf = b;
        r = a % b;
        a = b;
        b = r;
        if (r == 0)
        {
            break;
        }
    }
    cout << "HCF is " << hcf << endl;

    return 0;
}