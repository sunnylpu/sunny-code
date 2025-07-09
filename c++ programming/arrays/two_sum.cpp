#include <iostream>
#include <vector>
#include <map>
using namespace std;
int brute(vector<int> arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]+arr[i]==target){
                return {i,j};
            }
        }
    }
    return -1;
}

int better(vector<int> arr,int target){
    map<int ,int> mpp;
    
}
int main(){

}