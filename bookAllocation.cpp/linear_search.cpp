#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int element;
    cin>>element;
    for(int i=0;i<=size;i++){
        if(arr[i]==element){
            cout<<"element found at index :"<<i<<" which is "<<arr[i];
            break;
        }
    }
    cout<<"not found";
    
}