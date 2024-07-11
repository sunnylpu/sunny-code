#include <iostream>
#include <queue>
using namespace std;

class Queue {
    int *arr;
    int front1;
    int rear;
    int size;

public:
    Queue() {
        // Initialize size and allocate memory for the array
        size = 100001;
        arr = new int[size];
        front1 = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Check if the queue is empty
        return front1 == rear;
    }

    void enqueue(int data) {
        // Add an element to the rear of the queue
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Remove and return the front element of the queue
        if (front1 == rear) {
            return -1;
        } else {
            int ans = arr[front1];
            arr[front1] = -1;
            front1++;
            // Reset front1 and rear if the queue becomes empty
            if (front1 == rear) {
                front1 = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        // Return the front element of the queue
        if (front1 == rear) {
            return -1;
        } else {
            return arr[front1];
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;  // Should print 10

    cout << "Dequeued element: " << q.dequeue() << endl;  // Should print 10
    cout << "Dequeued element: " << q.dequeue() << endl;  // Should print 20

    cout << "Front element: " << q.front() << endl;  // Should print 30

    q.enqueue(40);
    cout << "Front element: " << q.front() << endl;  // Should print 30

    while (!q.isEmpty()) {
        cout << "Dequeued element: " << q.dequeue() << endl;
    }

    cout << "Queue is empty: " << q.isEmpty() << endl;  // Should print true

    return 0;
}
