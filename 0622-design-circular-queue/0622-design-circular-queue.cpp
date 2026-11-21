
class MyCircularQueue {
    int capacity;
    int* arr;
    int rear = -1;
    int front = -1;

public:
    MyCircularQueue(int k) {
        arr = new int[k];
        capacity = k;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        return true;
    }

    int Front() {
        return isEmpty() ? -1 : arr[front];
    }

    int Rear() {
        return isEmpty() ? -1 : arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};
