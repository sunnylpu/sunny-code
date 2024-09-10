#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    friend double calculateArea(Rectangle rect);
};


double calculateArea(Rectangle rect) {
    return rect.length * rect.width; 
}

int main() {
    // Create a Rectangle object
    Rectangle rect(5.0, 3.0);

    // Calculate area using the friend function
    double area = calculateArea(rect);

    // Output the area
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}