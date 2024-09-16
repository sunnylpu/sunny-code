#include<iostream>
using namespace std;

class  student{
    int roll;
    string name;
    double fee;

    public:
    
    student(int ,string,double);// parametrized constructor

    student(student& t){
        roll=t.roll;
        name=t.name;
        fee=t.fee;
        cout<<" copy constructor called "<<endl;
    }

    void display();
};

student :: student(int no,string n,double f){
    roll=no;
    name=n;
    fee=f;
}
void student:: display(){
    cout<<roll<<endl<<name<<endl<<fee<<endl;
}

int main(){

    student s(1001," chotu ",10000);
    s.display();

    student manjeet(s);
    manjeet.display();

    return 0;
}