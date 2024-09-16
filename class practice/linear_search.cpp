#include<iostream>
using namespace std;
 int main(){
    int arr[100];
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>element;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"element found :";
        }
        else{
            cout<<"not found :";
            break;
        }
    }

 }