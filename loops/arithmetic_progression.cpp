#include <iostream>
using namespace std;

int arithmetic_progression(int a,int d ,int n){
    int Nth_term,i=1;
    while(i<=n){
        int Nth_term=a + (i-1)*d;
        
        i++;
        
    } 
    return Nth_term;
    
}


int main(){
    int a,d,n;
    cout<<"enter  first term of A.P:";
    cin>>a;
    cout<<"Enter common difference of A.P:";
    cin>>d;
    cout<<"enter the n for range of A.P:";
    cin>>n;
    cout<<arithmetic_progression(a,d,n);
}