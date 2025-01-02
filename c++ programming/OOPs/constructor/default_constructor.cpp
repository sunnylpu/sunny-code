#include<iostream>
using namespace std;

class Base{
    public:

};
class A{
    public:
    A(){
        cout<<"A constructor "<<endl;
    }
    int size;
};

class B: public A{

};

class C : public A{
    public:
    C(){
        cout<<"C constructor "<<endl;
    }
};

class D{
    A a;
    public:
    D(){
        cout<<"D constructor "<<endl;
    }
};
int main(){
    Base base; // called default constructor provided by compiler
    B b;
    C c;
    D d;
}