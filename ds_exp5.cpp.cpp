#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;   // Stack is initially empty
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot insert element.\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Stack is empty.\n";
        } else {
            cout << arr[top--] << " popped from stack.\n";
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}