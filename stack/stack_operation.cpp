#include <iostream>
using namespace std;

class stack1 {
public:
    int* arr;
    int size;
    int top;

    // Constructor
    stack1(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (size - top > 1) { // space is available in stack for push
            top++;
            arr[top] = element;
        } else {
            cout << "stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "stack underflow" << endl;
        }
    }

    int peak() {
        if (top >= 0 && top < size) {
            return arr[top];
        } else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isempty() {
        return top == -1;
    }
};

int main() {
    stack1 s(5); // Creating a stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peak() << endl;

    s.pop();
    cout << "Top element after pop is: " << s.peak() << endl;

    s.pop();
    s.pop();
    s.pop(); // This will cause underflow

    if (s.isempty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
