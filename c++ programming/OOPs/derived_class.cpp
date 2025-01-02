#include<iostream>
using namespace std;

class gfg{
    public:
    void function_call(){
        print();
    }
    void print(){
        cout<<" Printing the base class content "<<endl;
    }
};

class gfg2: public gfg{
    public:
    void print(){
        cout<<" printing the content for the derived class "<<endl;
    }
};
int main(){
    gfg* geekforgeeks=new gfg();
    geekforgeeks->function_call();

    gfg* geekforgeeks2=new gfg2();
    geekforgeeks2->function_call();

    delete geekforgeeks2;
    delete geekforgeeks;
    return 0;
}