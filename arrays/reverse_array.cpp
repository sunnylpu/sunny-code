#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        // Swap elements
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout<<endl;
}
int main() {
    int arr[5]={3,56,6,-6,4};
    int brr[6]={3,47,7,6,-3,-1};
    reverse(arr,5);
    reverse(brr,6);
    printArray(arr,5);
    printArray(brr,6);
}