#include<iostream>
using namespace std;
bool Present(int arr[],int size){
    for (int i=0;i<size;i++){
        if(arr[i]==1){
            return true;
        }
    }return false;
}
//Function to perform Insertion Sort 
int main(){
    int arr[12]={2,3,4,5};
    int size=3;
    bool result=Present( arr,size);
    cout<<"Element is present in the array: "<<result<<endl;
    
    

}