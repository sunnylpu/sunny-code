#include<iostream>
using namespace std;
void charreverse(char name[],int n){
    int start=0;
    int end=n-1;
    while (start < end) {
        // Swapping the characters
        swap(name[start],name[end]);
        
        // moving towards the middle
        start++;
        end--;
}
}
int getlength(char name[]){
    int count=0; 
    for(int i=0;name[i]!= '\0';i++){
        count++;
    }
}
int main(){
    char name[23];
    cout<<"enter the  name of the student: ";
    cin>>name;
    return 0;

}