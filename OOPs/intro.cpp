#include<iostream>
using namespace std;

class Boy{
    public:
    int sunny;
    int health;
    int level;

    Boy(){
        cout<<"constructor called"<<endl;
    }

    // parametersized constructor
    Boy(int sunny){
        cout<<"sunny parameeterissed constructor "<<this<<endl;
        this -> sunny=sunny;
    }

    void print(){
        cout<<endl;
        cout<<"health "<<this ->health<<endl;
        cout<<"level "<<this ->level<<endl;
    }
};
int main(){
    
    int r(Boy);
    cout<<&r<<endl;
    













    // cout<<"hi "<<endl;
    // //statically created object
    // Boy sunny(0);
    // cout<<"hello "<<endl;
    // cout<<"address of "<<&sunny<<endl;
    // // dynamically created object
    // Boy *sun= new Boy;
    












    // this is static allocation
    // Boy sunny;
    // sunny.health=70;
    // sunny.level='A';
    // cout<<"health  "<<sunny.health<<endl;
    // cout<<"level  "<<sunny.level<<endl;
    


    // dynamic allocation
    //Boy *b=new Boy;
}