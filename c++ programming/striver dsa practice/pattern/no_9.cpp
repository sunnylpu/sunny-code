// diamond patten
// combination of inverted and erected patter
#include<iostream>
using namespace std;
void nStarDiamond(int n) {
    //inverted pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //erect pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int m;
    cin>>m;
    nStarDiamond(m);
}