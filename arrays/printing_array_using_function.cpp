#include<iostream>
using namespace std;
int printingArray(int n[],int size){
    int arr;
    cout<<"Enter elements of array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin>>arr;
    }
    cout<<"Elements in the array are : ";
    for (int j = 0; j < size; j++) {
        cout<<arr<<" ";
    }
}
int main(){
    int size=printingArray();
}