#include<iostream>
using namespace std;
void reversestring(int name[],int size){
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
    cout<<"length is: ";
    int len=getlength(name);
    return 0;
}