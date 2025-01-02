#include<iostream>
using namespace std;
bool palindrome(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
    return palindrome(str,i+1,j-1);
    }
}
int main(){
    string str;
    cin>>str;
    bool ispalindrome=palindrome(str,0,str.length()-1);
    if(ispalindrome){
        cout<<"it is a pallindrome"<<endl;
    }
    else{
        cout<<"it is not a pallindrome"<<endl;
    }
    return 0;
}