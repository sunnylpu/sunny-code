#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;    
    int age;         
    int rollNumber;  
    char grade;      

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student1;

    student1.name = "John Doe";
    student1.age = 20;
    student1.rollNumber = 101;
    student1.grade = 'A';

    student1.displayInfo();

    return 0;
}