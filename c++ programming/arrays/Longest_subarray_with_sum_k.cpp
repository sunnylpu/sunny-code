#include <iostream>
using namespace std;

void subarray(int arr[1000], int n,int k){
  int start=arr[0];
  int end=arr[n-1];
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }

  for(int i=0;i<n;i++){
    if(sum>k){
        start++;
    }
  }

  
}
int main(){
  int n;
  cin>>n;
  int arr[1000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  subarray(arr,n);
}