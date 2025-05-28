#include <set>
#include <iostream>
using namespace std;

void removeduplicates(int arr[1999],int n){
    set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    for(int x:set){
        cout<<x<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    removeduplicates(arr,n);
}