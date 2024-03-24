#include<iostream>
using namespace std;
int palindrome(int m){
    while(m!=0) {  
        int n = m % 10;        
        if (n != palindrome(m / 10))        
            return -1;            
        m = m / 10;    
}