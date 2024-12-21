#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<" speaking loudly i am in love of cat "<<endl;
    }
};

class human{
     
     public:
     string color;

     public:
     void speak(){
        cout<<"speaking loudly i am in love"<<endl;
     }
};

class dog: public animal{
    public:
    void type(){
        cout<<"bravery "<<endl;
    }

};

class cat: public animal{
    public:
    void types(){
        cout<<"slavery "<<endl;
    }

};

class multi_inheritance: public animal,public human{


};
int main(){
    multi_inheritance jatin;
    jatin.speak();
    jatin.bark();
}