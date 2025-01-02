#include<iostream>
using namespace std;
bool is_even(int n){
    return (n % 2 == 0);
}
int main() {
    cout<<"Entert the no :";
    int num;
    cin>>num;
    if (is_even(num))
        cout << "The number " << num << " is even." << endl;
    else
        cout << "The number " << num << " is odd." << endl;
    return 0;
}
//This program checks whether a given number is even or odd. It uses the function 'is
