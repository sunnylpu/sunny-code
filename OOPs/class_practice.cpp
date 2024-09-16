#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    long long int mobile_number;

    void introduce(){
        cout<<"my name is  "<<name<<endl;
        cout<<"my age is "<<age<<endl;
    }
};
int main(){
    student sunny;
    sunny.name="sunny tyagi";
    sunny.age=20;
    sunny.introduce();
    return 0;
}