#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node (int value){
        this->value=value;
        next=NULL;
    }
};
void insertAtTheHead (Node* &head,int value){
    Node* new_node = new Node(value);
    new_node->next=head;
    head=new_node;

}
void insertAtTheTail (Node* &head,int value){
    Node* new_node = new Node(value);
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void display (Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
void insertAtKthPosition (Node* &head,int value,int pos){
    Node* new_node= new Node(value);
    if (pos==0) insertAtTheHead(head,value);
    else{
        Node* temp=head;
        int current=0;
        while(current!=pos-1){
            temp=temp->next;
            current++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }

}
void upadateValueAtKPosition (Node* &head,int value,int pos){
     Node* new_node= new Node(value);
     int current = 0;
     Node* temp=head;
     while (current!=pos)
     {
        temp=temp->next;
        current++;
     }
     temp->value=value;
     
}
void deleteAtTheHead (Node* &head){
    Node* temp=head;
    head= head->next;
    free(temp);
}

int main (){
    Node* head= NULL;
    insertAtTheHead(head,3);
    display(head);
    insertAtTheHead(head,2);
    display(head);
    insertAtTheHead(head,1);
    display(head);
    insertAtTheTail(head,4);
    display(head);
    insertAtKthPosition(head,6,2);
    display(head);
    upadateValueAtKPosition(head,4,3);
    display(head);
    deleteAtTheHead(head);
    display(head);
}