#include<iostream>
using namespace std;
int SwapAleternate(int arr[],int size){
    int start=0,end=start+1;
    int i=0;
    while (start <=size) {
        // swapping the elements
        // int temp =arr[start];
        // arr[start] = arr[end];
        // arr[end]=temp;
        if (i+1<size){
        swap(arr[i],arr[i+1]);
        i+=2;

        }
        // moving towards the middle of the array
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout<<endl;
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"Given Array is: \n";
    printArray(arr,n);
    
    cout << "\nModified Array after calling SwapAlternate()\n";
    SwapAleternate(arr,n);
    printArray(arr,n);
    return 0;
}

// Output:
// Given Array is:
// 9 8 7 6 5 4 3 2 1
// 
// Modified Array after calling SwapAlternate()
// 9 1 8 2 7 3 6 5 4
// *
// }
// int /main(){

// }/