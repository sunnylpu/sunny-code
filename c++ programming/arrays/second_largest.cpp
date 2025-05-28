#include <iostream>
using namespace std;

void seclargest(int arr[100],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=max){
            slargest=arr[i];
        }
    }
    cout<<slargest;
}
int main(){
    int arr[1000], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    seclargest(arr,n);
    
}