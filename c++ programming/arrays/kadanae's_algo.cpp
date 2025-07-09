#include <iostream>
#include <algorithm>
using namespace std;
void brute(vector<int> arr){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;

            for(int k=0;k<=j;k++){
                sum+=arr[k];
                maxi=max(sum,maxi);
            }
        }
    }
    return maxi;
}
void better(vector<int> arr){
    
}
int main(){

}