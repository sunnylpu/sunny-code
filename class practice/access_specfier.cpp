#include<iostream>
using namespace std;

class student{
    public:
    char name[25];
    int age;
    int mob_no;

    private:
    int roll_no;
    int reg_no;

    public:
    void getdetails(){
        cin>>name;
        cin>>age;
        cin>>mob_no;
        cin>>roll_no;
        cin>>reg_no;
    }


    void print_details(){
        cout<<"the name of the person is : "<<name<<endl;
        cout<<"the age of the person is : "<<age<<endl;
        cout<<"the mob_no of the person is : "<<mob_no<<endl;
        cout<<"the roll_no of the person is : "<<roll_no<<endl;
        cout<<"the reg_no of the person is : "<<reg_no<<endl;

    }
};
int main(){
    student s;
    s.getdetails();
    s.print_details();
}