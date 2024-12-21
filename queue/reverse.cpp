#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    void insertAtBottom(queue<int> &q, int element) {
        if (q.empty()) {
            q.push(element);
            return;
        }

        int front = q.front();
        q.pop();

        insertAtBottom(q, element);

        q.push(front);
    }

    void reverseQueue(queue<int> &q) {
        if (q.empty()) {
            return;
        }

        int front = q.front();
        q.pop();

        reverseQueue(q);

        insertAtBottom(q, front);
    }

    queue<int> rev(queue<int> q) {
        reverseQueue(q);
        return q;
    }
};

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    Solution sol;
    q = sol.rev(q);

    // Printing the reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
