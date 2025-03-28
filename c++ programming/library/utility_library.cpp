#include<iostream>
#include<utility>//library that use in this file
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){


// first code for swap function using utility library

int a[4];

int b[]={10,20,30,40};

swap(a,b);

cout<<" a contains ";
for(int i=0;i<4;i++){
    cout<<endl;
    cout<<a[i]<<" ";
}
cout<<endl;




// second use for this library 
         // make pairs



        // intializing the pair
         pair<int ,int> c;
         pair<int,char> d;


         c =make_pair(10,20);
         d=make_pair(15.5,'a');

         cout<<" a : "<<c.first<<", "<<c.second<<endl;
        cout<<" b : "<<d.first<<", "<<d.second<<endl;




    // third use is the move object
    cout<<endl;
    string s="hello!!" ;
    string s1="i am a greek ";

    vector<string> gfg;

    gfg.push_back(s);
    gfg.push_back(move(s1));

    cout<<"gfg contains "<<endl;
    for(int i=0;i<gfg.size();i++){
        cout<<" "<<gfg[i];
    }
    // cout<<endl;
}