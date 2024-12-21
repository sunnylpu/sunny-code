#include <iostream>
#include <cmath>

using namespace std;

double area(double side) {
    return side * side;
}

double area(double length, double width) {
    return length * width;
}

double area(double radius, bool isCircle) {
    const double PI = 3.14;
    return PI * radius * radius;
}

int main() {
    double side, length, width, radius;

    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square: " << area(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius, true) << endl;

    return 0;
}