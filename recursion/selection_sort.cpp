#include <iostream>
using namespace std;
int selection_sort(int arr[],int n,int i=0){

        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[minindex]){
                int minindex=j;
            }
        }
        swap(arr[i],arr[i+1]);
    }


int main(){
    int arr[100],size;
    cin>>size;
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }
    
}