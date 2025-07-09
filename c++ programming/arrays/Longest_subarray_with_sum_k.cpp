#include <iostream>
using namespace std;

int brutesubarray(int arr[1000], int n,int k){
  int maxlen=0;
  for(int i=0;i<n;i++){
      int sum=0;
      int cnt=0;
      for(int j=i;j<n;j++){
        sum+=arr[j];
        cnt++;
        if(sum==k){
          if(cnt>maxlen){
            maxlen=cnt;
          }
        }
      }
    }
    return maxlen;
}
int main(){
  int n;
  cin>>n;
  int arr[1000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;
  int ans=brutesubarray(arr,n,k);
  cout<<ans;
}