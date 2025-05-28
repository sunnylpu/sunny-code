#include <iostream>
using namespace std;

void largest(int arr[100],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}
int main(){
    int arr[1000], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr,n);
    
}