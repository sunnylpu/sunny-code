#include<iostream>
using namespace std;
int Reverse(int arr[],int size){
    for (int i=0;i<size;i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size - 1 - i]=temp;
        return temp;
    }
}
int main(){
    int arr[]={9,8,7,6,5};
    cout<<"Original array is : ";
    for(int i=0;i<5;i++)
        cout <<arr[i]<< " ";
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nReversed array is: ";
    Reverse(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}
