#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val=x;
        left=right=nullptr;
    }
};
class BST {
    private:
    Node* root;
    void insert (Node*& root,int val){
        if (root==nullptr){
            root= new Node(val);
        }
       else  if (root->val==val) return;
       else if (val >root->val) insert (root->right,val);
       else insert(root->left,val);
    }
    bool search (Node* root,int val){
        if (root==nullptr) return false;
        else if (root->val==val) return true;
        else if (val <root->val) return search(root->left,val);
        else return search(root->right,val);
    }
    Node* finMin (Node* root){
        while (root && root->left){
            root=root->left;
        }
        return root;
    }
    void deletion (Node*& root,int val){
        if (root==nullptr) return;
        else if (val>root->val) deletion(root->right,val);
        else if (val <root->val) deletion(root->left,val);
        else {
            if (root->left==nullptr && root->right==nullptr){
                delete root;
                root=nullptr;
            }
            else if (root->left==nullptr){
                Node* temp=root;
                root=root->right;
                delete temp;
            }
            else if (root->right==nullptr){
                Node* temp=root;
                root=root->left;
                delete temp;
            }
            else {
                Node* temp=finMin(root->right);
                root->val=temp->val;
                deletion(root->right,temp->val);
            }
        }
    }
    void inOrder(Node* root){
        if (root==nullptr) return;
        inOrder(root->left);
        cout<<root->val<<" ";
        inOrder(root->right);
    }
    void postOrder (Node* root){
        if(root==nullptr) return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->val<<" ";
    }
    void preOrder (Node* root){
        if(root==nullptr) return;
        cout<<root->val<<" ";
        preOrder(root->left);
        preOrder(root->right);
        
    }
    public:
    BST (){
        root=nullptr;
    }
    void insert (int val){
        insert(root,val);
    }
    void deletion(int val){
        deletion(root,val);
    }
    void search(int val){
        if (search(root,val)) cout<<"Found"<<endl;
        else cout<<"Not Found"<<endl;
    }
    void inOrder (){
        inOrder(root);
        cout<<endl;

    }
    void postOrder(){
        postOrder(root);
         cout<<endl;
    }
    void preOrder(){
        preOrder(root);
         cout<<endl;
    }
};
int main (){
    BST a;
    int choice ;
    cout<<"1->Insert"<<endl;
    cout<<"2->Delete"<<endl;
    cout<<"3->Search"<<endl;
    cout<<"4->InOrder"<<endl;
    cout<<"5->PostOrder"<<endl;
    cout<<"6->PreOrder"<<endl;
    do{
        cin>>choice;
        switch (choice){
            case 1:{
                int x;
                cin>>x;
                a.insert(x);
                break;
            }
            case 2:{
                int x;
                cin>>x;
                a.deletion(x);
                break;
            }
            case 3:{
                int x;
                cin>>x;
                a.search(x);
                break;
            }
             case 4:{
                cout<<"Inorder->";
                a.inOrder();
                break;
            }
            case 5:{
                cout<<"Postorder->";
                a.postOrder();
            }
            case 6:{
                cout<<"Preorder->";
                a.preOrder();
            }
            default:{
                cout<<"Invalid choice";
            }
        }
    }
    while (choice!=0);

}
