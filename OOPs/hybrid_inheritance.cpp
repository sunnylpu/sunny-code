#include<iostream>
using namespace std;

class a{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<" speaking loudly i am in love "<<endl;
    }
};

class j{
    public:
    int rest;

    public:
    void speak2(){
        cout<<" hybrid inheritance "<<endl;
    }
};

class c: public j{

};
class b: public a{

};


//class c: public a{

//};

class d: public b{

};

class e: public b{

};

class f: public b{

};

class g: public c{

};

class h: public c{

};

class i: public c{

};
int main(){
   i sunny9;
   sunny9.speak2();

   g sunny8;
   sunny8.speak2();

    h sunny7;
   sunny7.speak2();

   f sunny6;
   sunny6.speak();

   e sunny5;
   sunny5.speak();

   d sunny4;
   sunny4.speak();

   c sunny3;
   sunny3.speak2();

   b sunny2;
   sunny2.speak();

   a sunny1;
   sunny1.speak();

   j sunny10;
   sunny10.speak2();
}