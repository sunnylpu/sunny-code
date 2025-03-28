#include <iostream>
using namespace std;

class TwoStacks {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    // Constructor
    TwoStacks(int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // Push in stack 1
    void push1(int element) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = element;
        } else {
            cout << "Stack 1 Overflow" << endl;
        }
    }

    // Push in stack 2
    void push2(int element) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = element;
        } else {
            cout << "Stack 2 Overflow" << endl;
        }
    }

    // Pop from stack 1
    void pop1() {
        if (top1 >= 0) {
            top1--;
        } else {
            cout << "Stack 1 Underflow" << endl;
        }
    }

    // Pop from stack 2
    void pop2() {
        if (top2 < size) {
            top2++;
        } else {
            cout << "Stack 2 Underflow" << endl;
        }
    }

    // Peek stack 1
    int peek1() {
        if (top1 >= 0) {
            return arr[top1];
        } else {
            cout << "Stack 1 is empty" << endl;
            return -1;
        }
    }

    // Peek stack 2
    int peek2() {
        if (top2 < size) {
            return arr[top2];
        } else {
            cout << "Stack 2 is empty" << endl;
            return -1;
        }
    }

    // Check if stack 1 is empty
    bool isEmpty1() {
        return top1 == -1;
    }

    // Check if stack 2 is empty
    bool isEmpty2() {
        return top2 == size;
    }
};

int main() {
    TwoStacks ts(10); // Creating a TwoStacks object with an array size of 10

    ts.push1(10);
    ts.push1(20);
    ts.push1(30);

    ts.push2(100);
    ts.push2(200);
    ts.push2(300);

    cout << "Top element of Stack 1 is: " << ts.peek1() << endl;
    cout << "Top element of Stack 2 is: " << ts.peek2() << endl;

    ts.pop1();
    cout << "Top element of Stack 1 after pop is: " << ts.peek1() << endl;

    ts.pop2();
    cout << "Top element of Stack 2 after pop is: " << ts.peek2() << endl;

    if (ts.isEmpty1()) {
        cout << "Stack 1 is empty" << endl;
    } else {
        cout << "Stack 1 is not empty" << endl;
    }

    if (ts.isEmpty2()) {
        cout << "Stack 2 is empty" << endl;
    } else {
        cout << "Stack 2 is not empty" << endl;
    }

    return 0;
}
