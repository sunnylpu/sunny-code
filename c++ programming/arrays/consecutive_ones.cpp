#include <iostream>
#include <algorithm>
using namespace std;

void brutecon(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        int maxcnt=0;
        if(arr[i]==1){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
        return maxi;
    }

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=brutecon(arr,n);
    cout<<ans;
}