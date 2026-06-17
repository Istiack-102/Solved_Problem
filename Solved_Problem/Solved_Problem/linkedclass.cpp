#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insertAtTheHead(int value) {
        Node* new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void insertAtTheTail(int value) {
        Node* new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertAtTheKPosition(int value, int pos) {
        if (pos == 0) {
            insertAtTheHead(value);
            return;
        }
        Node* new_node = new Node(value);
        Node* temp = head;
        int current = 0;
        while (temp != nullptr && current < pos - 1) {
            temp = temp->next;
            current++;
        }
        if (temp == nullptr) {
            // Position out of bounds, insert at tail
            insertAtTheTail(value);
            return;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtTheHead() {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtTheTail() {
        if (head == nullptr) return;
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void updateAtTheKPosition(int value, int pos) {
        Node* temp = head;
        int current = 0;
        while (temp != nullptr && current < pos) {
            temp = temp->next;
            current++;
        }
        if (temp != nullptr)
            temp->value = value;
    }

    void deleteAtTheKPosition(int pos) {
        if (pos == 0) {
            deleteAtTheHead();
            return;
        }
        Node* temp = head;
        int current = 0;
        while (temp != nullptr && current < pos - 1) {
            temp = temp->next;
            current++;
        }
        if (temp == nullptr || temp->next == nullptr) return;
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
};

int main() {
    LinkedList list;

    list.insertAtTheHead(1);
    list.display();

    list.insertAtTheHead(10);
    list.display();

    list.insertAtTheHead(100);
    list.display();

    list.insertAtTheTail(50);
    list.display();

    list.insertAtTheKPosition(11, 2);
    list.display();

    list.deleteAtTheHead();
    list.display();

    list.deleteAtTheTail();
    list.display();

    list.updateAtTheKPosition(105, 1);
    list.display();

    list.deleteAtTheKPosition(1);
    list.display();

    return 0;
}
