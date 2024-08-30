#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * radius * radius;
    }

    void displayArea() {
        cout << "The area of the circle is: " << calculateArea() << endl;
    }
};


class rectangle{

    private:
    int length;
    int breadth;

    public:
    int area(){
        return length*breadth; 
    }

};
int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circle(r);
    circle.displayArea();

    return 0;
}
