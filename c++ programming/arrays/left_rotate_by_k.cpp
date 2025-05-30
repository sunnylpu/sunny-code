#include<iostream>
using namespace std;

void bruterotate(int arr[100],int n,int k){
    // temp array me last k element save krr rha
    int temp[100];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }

    // main array me shifr krke jagah bna di

    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }

    // abb dono ko add krke...rotated mil jaegi
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}


// using the reverse the array
void reverse(int arr[],int start, int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void optimiserotate(int arr[100],int n,int k){
    //start waalo ko reverse kia
    reverse(arr,0,n-k-1);

    // ab k waale ko krr deta hu
    reverse(arr,n-k,n-1);

    // full array ko rotate krr deta hu
    reverse(arr,0,n-1);
}
void print(int arr[100], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    optimiserotate(arr,n,k);
    print(arr,n);
}