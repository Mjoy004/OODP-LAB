#include <iostream>
#include <stdexcept>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    // Push operation
    void push(int x) {
        if (top >= capacity - 1) {
            throw overflow_error("Stack Overflow: Cannot push, stack is full!");
        }
        arr[++top] = x;
        cout << "Pushed: " << x << endl;
    }

    // Pop operation
    int pop() {
        if (top < 0) {
            throw underflow_error("Stack Underflow: Cannot pop, stack is empty!");
        }
        return arr[top--];
    }

    // Display
    void display() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack Elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(3); // stack of size 3

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.display();

        // Uncomment this to check Overflow
        // s.push(40); // Will throw exception

        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;

        // Uncomment this to check Underflow
        // cout << "Popped: " << s.pop() << endl; // Will throw exception
    }
    catch (overflow_error &e) {
        cout << e.what() << endl;
    }
    catch (underflow_error &e) {
        cout << e.what() << endl;
    }
    catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
