#include<iostream>
using namespace std;
int perfect_number(int m){
    int divsum=0;
    for(int i=1;i<m;i++){
        int digit=m%i;
        if(digit==0){
            divsum+=i;
        }
    }
    return divsum;
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<perfect_number(n);

}