#include <iostream>
#include <set>
using namespace std;
void union1(int arr1[],int arr2[],int n1,int n2){
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }

    for(int x:s){
        cout<<x<<" ";
    }
}

void opunion(int arr1[],int arr2,int n1,int n2){
    
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    union1(arr1,arr2,n1,n2);
}