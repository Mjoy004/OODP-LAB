#include <iostream>
#include <stdexcept>
using namespace std;

class Queue {
private:
    int* arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    // Enqueue operation
    void enqueue(int x) {
        if (rear == capacity - 1) {
            throw overflow_error("Queue Overflow: Cannot enqueue, queue is full!");
        }
        if (front == -1) front = 0; // first element
        arr[++rear] = x;
        cout << "Enqueued: " << x << endl;
    }

    // Dequeue operation
    int dequeue() {
        if (front == -1 || front > rear) {
            throw underflow_error("Queue Underflow: Cannot dequeue, queue is empty!");
        }
        return arr[front++];
    }

    // Display operation
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(3); // Queue of size 3

    try {
        q.enqueue(5);
        q.enqueue(10);
        q.enqueue(15);
        q.display();

        // Uncomment to check Overflow
        // q.enqueue(20);

        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;

        // Uncomment to check Underflow
        // cout << "Dequeued: " << q.dequeue() << endl;
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
