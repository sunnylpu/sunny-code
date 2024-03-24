#include<iostream>
using namespace std;
void PrintingSum(int arr[],int size){
    int sum = 0;
    for (int i=0 ;i < size ; i++) {
        cout << "Element at index "<< i <<" is : "<< arr[i] << endl;
        sum += arr[i];
    }
    cout << "\nSum of all elements in the array is: " << sum <<endl;
}

int main() {
    int arr[] = {12, 34, 56, 78};
    PrintingSum(arr[],size);
    return 0;
}