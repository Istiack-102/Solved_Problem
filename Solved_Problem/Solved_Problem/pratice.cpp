#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=nullptr;
    }
};
class Queue{
    private:
    Node* head;
    public:
    Queue(){
        head=nullptr;
    }
    void push(int val){
        if (head==nullptr){
            head=new Node(val);
            return;
        }
        Node* temp=head;
        while (temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new Node(val);
    }
    void pop(){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void display(){
        Node* temp=head;
        while (temp!=nullptr){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};