#include <iostream>
using namespace std;
 
void bubblesort(int n , int arr[]){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        // swap(arr[j],arr[j+1]); // we also use temp variable for swapping. this swap is used by the help  of algorithm library
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

void selectionsort(int n, int arr[]){
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min])
        min=j;
    }
    swap(arr[min],arr[i]);
  }
}
void print(int arr[] ,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int n , arr[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  bubblesort(n,arr);
  print(arr,n);
  cout<<endl;
  selectionsort(n,arr);
  print(arr,n);
}