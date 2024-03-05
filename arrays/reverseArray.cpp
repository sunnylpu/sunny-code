#include<iostream>
using namespace std;
int reverseArray(int arr[],int n){
    int start=0,end=n-1;
    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move towards the middle
        start++;
        end--;
    }
    
}
int main(){
    
}