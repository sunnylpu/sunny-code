#include<iostream>
using namespace std;


int main(){
// program to demostrate that array name is pointer to the object
int size=6;
int arr[size]={1,23,4,5,6};
int *ptr=arr;
for(int i=0;i<size;i++){
    cout<<"value at index "<<i<<*(ptr+i);
}

}

