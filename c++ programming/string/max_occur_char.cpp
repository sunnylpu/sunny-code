#include<iostream>
using namespace std;

char maxoccur(string s){
    int arr[26]={0};

    // create an array for count of character 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int num=0;
        num=ch - 'a';
        arr[num]++;
    }

        //find the max occuring character.
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ ans;
}
int main(){
    string s;
    cin>>s;
    cout<<maxoccur(s)<<endl;
    return 0;
}