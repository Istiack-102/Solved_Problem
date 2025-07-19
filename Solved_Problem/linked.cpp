#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node* next;
    Node(int x){
        value=x;
        next=NULL;
    }
};
void insertAtTheHead (Node* &head,int value ){
    Node* new_node = new Node (value);
    new_node->next=head;
    head = new_node;

}
void insertAtTheTail (Node* &head, int value ){
    Node* new_node= new Node(value);
    Node* temp=head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
   temp->next= new_node;
}
void display (Node* head ){
    Node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    
}
int main (){
  Node* head = NULL;
    insertAtTheHead(head,2);
    insertAtTheHead(head,1);
    insertAtTheTail(head,4);
    display(head);

}