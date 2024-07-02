#include <iostream> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    private:
    int real;
    int imaginary;
    public:
    // constructor
    ComplexNumbers(int r,int i){
        real=r;
        imaginary=i;
    }
     void plus(ComplexNumbers const &c){
         real=real + c.real;
         imaginary=imaginary + c.imaginary;
     }
     void multiply(ComplexNumbers const &c){
         int newReal=(real*c.real) - (imaginary*c.imaginary);
         int newImaginary=(real* c.imaginary) + (imaginary*c.real);

         real=newReal;
     imaginary=newImaginary;
     }

     void print()const{
         cout<<real<<" + i"<<imaginary<<endl;
     }
     

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}