#include<iostream>
using namespace std;
int main(){
    int size1;
    cin>>size1;
    int arr1[100];
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    int size2;
    cin>>size2;
    int arr2[100];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    int total=size1+ size2;

    int arr_total[200];

    for(int i=0;i<size1;i++){
        arr_total[i]=arr1[i];
    }
    for(int i=0;i<total;i++){
        arr_total[size1+i]=arr2[i];
    }

    for(int i=0;i<total;i++){
        cout<<arr_total[i]*2<<" ";
    }
    cout<<endl;
}