#include<iostream>
using namespace std;
void swap(int arr[],int size){
    for (int i=0;i<size;i++){
        int temp =arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int main(){
    int arr[12]= {3,4,5,6,7,8,9,10};
    cout<<"Original array: ";
    for(int i=0;i<8;i++)
        cout << arr[i] << " ";
    cout << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    // calling the function to reverse the array
    swap(arr,n);
    cout << "Reversed array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}