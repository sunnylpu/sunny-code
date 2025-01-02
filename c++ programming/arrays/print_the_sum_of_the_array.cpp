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
    int arr[1000];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    PrintingSum(arr,n);
   return 0;
}
 