#include<iostream>
using namespace std;
bool palindrome(string s[],int size){
    int start=0,end=size-1;
    while (start < end) {
        if (s[start] != s[end]) 
            {
                return false; 
            }
            else{
                start++;
                end--;
            }
            }
} 


int main(){
    int n[],size;
    for(int i=0;)
}