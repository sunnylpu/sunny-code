#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<" speaking "<<endl;
    }
};

class dog: public animal{

};
int main(){
    dog cow;
    cow.speak();
}