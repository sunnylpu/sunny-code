#include<iostream>
using namespace std;
void reversestring(char name[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}


char tolowercase(char ch){
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch - 'A' + 'a';
    }
}
bool checkpalindrome(char name[],int size){
    int start=0;
    int end=size-1;
    while (start<end)
    {
        if(tolowercase(name[start])!=tolowercase(name[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
    
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }return count;

}
int main(){
    char name[20];

    cout<<"enter your name"<<endl;
    cin>>name;
    int len=getlength(name);
    cout<<"length is:"<<len<<endl;
    
    
    reversestring(name,len);
    cout<<"your name is :"<<name<<endl;

    
    
    
    int palindrome=checkpalindrome(name,len);
    cout<<palindrome<<endl;


    cout<<"character is :"<<tolowercase('B')<<endl;
    cout<<"character is :"<<tolowercase('b')<<endl;

    return 0;
}