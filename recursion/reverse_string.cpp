#include<iostream>
#include<string>
using namespace std;
void reverse(string &str,int s,int e) {
    
    if(s>=e){
        return;
    }
    
   swap(str[s],str[e]);
   
   reverse(str,s+1,e-1);
    
}
int main(){
    string str;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    reverse(str,s,e);
    cout<<str<<endl;
    return 0;
}
