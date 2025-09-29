#include <iostream>
using namespace std;

class Stack {
public:
    int maxSize;
    int topIndex;
    int* data;

    Stack(int size) {
        maxSize = size;
        data = new int[maxSize];
        topIndex = -1;
    }

    ~Stack() {
        delete[] data;
    }

    void push(int val) {
        if (topIndex < maxSize - 1) {
            topIndex++;
            data[topIndex] = val;
        } else {
            cout << "Stack is full (Overflow)" << endl;
        }
    }

    void pop() {
        if (topIndex >= 0) {
            topIndex--;
        } else {
            cout << "Stack is empty (Underflow)" << endl;
        }
    }

    int topElement() {
        if (topIndex >= 0) {
            return data[topIndex];
        } else {
            return -1;
        }
    }
};

int main() {
    Stack s(5);

    s.push(23);
    s.push(24);
    s.push(25);

    cout << s.topElement() << endl;
    s.pop();
    cout << s.topElement() << endl;

    return 0;
}
