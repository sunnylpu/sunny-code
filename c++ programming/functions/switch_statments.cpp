#include <iostream>
using namespace std;
int main(){
    cout<<"only enter [1,2,3]: "<<endl;
    int n;
    cin>>n;
    switch (n)
    {
    case 1 : cout<<"the cards no is 1: "<<endl;
        break;
    case 2: cout<<" the cards no is 2: "<<endl; 
        /* code */
        break;
    case 3: cout<<"the cards no is 3: "<<endl;
        break;
    
    default: cout<<"please enter the no given above: "<<endl;
        break;
    }
    return 0;
}