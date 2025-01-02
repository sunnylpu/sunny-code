#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
// this is the program for reverse string
    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;

        while(st<e) {
            swap(s[st++], s[e--]);
        }
    }
};