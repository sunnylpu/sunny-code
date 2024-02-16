#include <iostream>
using namespace std;
void printArray(int arr[] , int size){
    cout<<"print the array "<<endl;
    for (int i=0 ;i<size ;i++ ){
        cout<<arr[i]<<endl;
}
}
int main() {
    int number[23];
    cout<<endl<<"print the index 23 "<<number[23]<<endl;
    int second[3]={3,5,66};
    cout<<"print the indexing value "<<second[1]<<endl;
    int third[23]={3,4,5};
    //printing the first and last element of an array
    cout<<"the first element is : "<<third[0]<<endl;
    cout<<"the last element is : "<<third[sizeof(third)/sizeof(third)]<<endl  ;
    //passing arrays to functions
    printArray(second,3);
    printArray(third, sizeof(third)/sizeof(third));
    
    return 0;
    
}