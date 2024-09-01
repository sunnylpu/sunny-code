#include<iostream>
#include<string>
using namespace std;

 int main(){
    string s="INT_MAX";

    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
 }