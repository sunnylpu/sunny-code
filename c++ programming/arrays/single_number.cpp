#include <iostream>
using namespace std;

int brute1(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        int num=arr[i];
        for(int j=0;j<n;i++){
            if(num==arr[j]){
                cnt++;
            }
        }
        if(cnt==1) return num;
    }
    return -1;
}

int hashing(int arr[] , int n){
    // array kaa max nikal ke hash ke size pta kro
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    // hashing ke lie count store krr lie h
    vector<int> hash(maxi+ 1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    // check kro konsa ek baar aaya h bss
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    // agr kuch naa mile to mna kro nhi mila bhai
    return -1 

}

int optimal(int arr[],int n){
    int xor=0;
    for(int i=0;i<n;i++){
        xor^=arr[i];
    }
    return xor;
}
int main(){

}