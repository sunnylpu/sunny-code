#include<iostream>
using namespace std;
int power(int n,int m){
    int result = 1;

    if (m < 0) {
        cout << "1/";
        m = -m; // Make exponent positive for reciprocal
    }

    for (int i = 0; i < m; ++i) {
        result *= n;
    }

    return result;
    }

int main()
{   
   cout << "Enter the base number: ";
   int num = 0; cin >> num;
   cout << "\nEnter the exponent: ";
   int exp = 0; cin >> exp;
   // Checking for zero division error
   if (num == 0 && exp == 0) {
       cout << "Error! Division by zero is not allowed.";
   }
   else if (exp < 0) {
       // Calculating reciprocal of the result
       power(num,-exp);
   }
   else {
       cout << num << "^" << exp << "=" << power(num,exp);
    
   }
   return 0;
}

