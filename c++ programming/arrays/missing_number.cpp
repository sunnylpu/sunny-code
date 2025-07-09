#include <iostream>
using namespace std;
int missing(int arr[],int n){
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                bool found=true;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
    return -1;
}
int optmissing(int arr[],int n){
    
}
int main(){

}