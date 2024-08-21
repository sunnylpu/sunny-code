#include<iostream>
#include<array>
using namespace std;

void insertion(int *arr,int n,int k){
    int j=n;
    while(j>=k){
        arr[j+1]=arr[j];
        j-=1;

    }
}
int main(){
    int arr[100];
    int n,k;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}