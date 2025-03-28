#include <iostream>
#include <string>
using namespace std;

class Person {
private:
  string name;
  int age;
  string occupation;

public:
  Person(string name, int age,string occupation) {
    this->name = name;
    this->age = age;
    this->occupation = occupation;
  }

  void displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Occupation: " << occupation << endl;
  }
};

int main() {
  Person person1("John Doe", 30, "Software Engineer");

  person1.displayInfo();

  return 0;
}
