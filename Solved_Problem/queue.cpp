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
    void insert(int val){
        Node* newNode = new Node(val);
        if (head==NULL){
            head= newNode;
            return;
        }
        Node* temp=head;
        while (temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void deletion (){
        Node* temp= head;
        head=head->next;
        delete temp;
    }
    void display(){
        Node* temp= head;
        while (temp!=nullptr){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NUll"<<endl;
    }
};
int main(){
    Queue obj;
    obj.insert(12);
    obj.insert(14);
    obj.insert(11);
    obj.insert(1);
    obj.insert(120);
    obj.insert(126);
    obj.insert(33);
    obj.display();
    obj.deletion();
    obj.display();
}