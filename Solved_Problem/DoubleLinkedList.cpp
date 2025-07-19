#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    
    Node(int x){
        val = x;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void insertAtTheHead(int val){
        Node* new_node = new Node(val);
        if (head == nullptr){
            head = tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void insertAtTheTail(int val){
        Node* new_node = new Node(val);
        if (head == nullptr){
            head = tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void display(){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtThekThPosition (int val,int pos){
        Node* new_node= new Node (val);
        Node* temp=head;
        int count =1;
        while (count<pos-1){
            temp=temp->next;
            count++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
    }
    void deleteAtHead (){
        if (head==nullptr) return;
        Node* temp= head;
        head=head->next;
        if (head==nullptr) tail=nullptr;
        else head->prev=nullptr;
        free(temp);
    }
    void deleteAtTheTail (){
        if (head==nullptr) return;
        Node*temp=tail;
        tail=tail->prev;
        if (tail==nullptr) head=nullptr;
        else tail->next=nullptr;
        free(temp);
    }
    void deleteAtThekThPosition (int pos){
        Node*temp=head;
        int count=1;
        while (count<pos) {
            temp=temp->next;
            count++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        
    }

};


int main (){
    DoublyLinkedList a;
    a.insertAtTheHead(10);
    a.insertAtTheTail(20);
    a.insertAtTheHead(5);
    a.display(); 
    a.insertAtThekThPosition(12,2); 
     a.display();
     a.deleteAtThekThPosition(2);
     a.display(); 
}
