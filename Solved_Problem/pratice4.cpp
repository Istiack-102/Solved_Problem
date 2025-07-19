#include <iostream>
using namespace std;

int pos = 0;
const int maxSize = 100;
int arr[maxSize];

void push(int val) {
    if (pos == maxSize) {
        cout << "Overflow" << endl;
    } else {
        arr[pos++] = val;
    }
}

void pop() {
    if (pos == 0) {
        cout << "Underflow" << endl;
    } else {
        cout << "Popped element: " << arr[--pos] << endl;
    }
}

void display() {
    if (pos == 0) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = pos - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    display();

    push(12);
    display();

    push(13);
    display();

    push(14);
    display();

    pop();
    display();
    pop();
    display();
    pop();
    display();
     pop();
    display();
    
    

    return 0;
}
