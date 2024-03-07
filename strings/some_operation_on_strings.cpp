#include<iostream>
using namespace std;
int reversestring(int name[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}
int checkpalindrome(int name[],int size){
    int start=0;
    int end=size-1;
    while (start<end)
    {
        if(name[start]!=name[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
    
}

int getlength(int name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }return count;

}
int main(){
    char nam[20];
    cout<<"enter your name"<<endl;
    cin>>nam;
    cout<<"length is: ";
    getlength(nam);
    return 0;
}