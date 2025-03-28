#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot=arr[s];

    int count=0;
    
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivot_index=s+count;
    swap(arr[pivot_index],arr[s]);
    // left and right waale part ko sambhalna h

    int i=s;
    int j=e;
    while(i<pivot_index && j>pivot_index ){

        while(arr[i]<=pivot){
                i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivot_index && j>pivot_index){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;
}

void quick_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);

    //left waala part
    quick_sort(arr,s,p-1);

    //right waala part
    quick_sort(arr,p+1,e);
}
int main(){
    int arr[10]={4,6,3,7,9,8,65,5,4,4};
    int n=10;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}