#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main() {
    array<int , 5> ar={1,2,3,4,5};
    cout<<"the elements of the array"<<endl;
    for(int i=0;i<5;i++){
        cout<<ar.at(i)<<" "<<endl;  
    }cout<<"print the element fo the array using get function"<<" "<<endl;
    cout<<get<0>(ar)<<" "<<get<1>(ar)<<" "<<endl;
    cout<<get<2>(ar)<<" "<<get<3>(ar)<<" "<<endl;
    cout<<get<4>(ar)<<" "<<get<4>(ar)<<" "<<endl;
    cout<<"the first element of the array is "<<endl;
    int b=ar.front();
    b=6;
    cout<<b<<endl;
    cout<<"the last element of the array is "<<endl;
    int c=ar.back();
    c=7;
    cout<<c<<endl;
     b=38;
     c=48;
    cout<<"array after updating the first and last element"<<" "<<endl;
    for(auto x:ar){
        cout<<x<<" "<<endl;
    }
    cout<<endl;
    int g=ar.size();
    cout<<"the size of the array is "<<g<<endl;
    cout<<" the maximum element of the array"<<endl;
    int d=ar.max_size();
    cout<<d;
}
    