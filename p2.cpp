#include <iostream>

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

    ~Stack() {
        delete[] arr;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack Overflow: Cannot push element, the stack is full.\n";
        } else {
            arr[++top] = value;
            std::cout << value << " pushed to the stack.\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow: Cannot pop element, the stack is empty.\n";
        } else {
            int value = arr[top--];
            std::cout << value << " popped from the stack.\n";
        }
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the stack: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size entered. Please enter a positive integer.\n";
        return 1;
    }

    Stack stack(size);

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            int value;
            std::cout << "Enter the value to push: ";
            std::cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
