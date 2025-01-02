#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=s + (e-s)/2;

}
int mergesort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }

    // left part sort karna h
    mergesort(arr,s,e-mid+1);

    // right part sort karna h
    mergesort(arr,mid+1,e);

}
int main(){
    int arr[5]={3,56,6,78,32};
    int n=5;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
}