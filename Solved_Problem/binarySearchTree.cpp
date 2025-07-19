#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val=x;
        left=nullptr;
        right=nullptr;
    }
};
class BST {
    private:
    Node* root;
    void insert (Node*& root,int val){
        if (root==nullptr) {
            root= new Node(val);
            return;
        }
        if (root->val==val) return;
        if (val<root->val){
            insert(root->left,val);
        }
        else insert(root->right,val);
    }
    void inOrder(Node* root){
        if (root==nullptr) return;
        inOrder(root->left);
        cout<<root->val<<" ";
        inOrder(root->right);
    }
    Node* findMind (Node* root){
        while(root && root->left){
            root=root->left;
        }
        return root;
    }
    void deletion(Node*& root,int val){
        if (root==nullptr) return;
        else if (val > root->val){
            deletion(root->right,val);
        }
        else if (val<root->val){
            deletion(root->left,val);
        }
        else {
            if (root->left==nullptr && root->right==nullptr){
                delete root;
                root=nullptr;
            }
          else   if (root->left==nullptr){
                Node* temp=root;
                root=root->right;
                delete temp;
            }
            else if (root->right==nullptr){
                Node* temp= root;
                root=root->left;
                delete temp;
            }
            else {
                Node* temp= findMind(root->right);
                root->val= temp->val;
                deletion(root->right,temp->val);
            }

        }
    }
    bool search (Node* root,int val){
        if (root==nullptr) return false ;
       else  if (root->val== val) return true;
       else if (val > root->val) return search(root->right,val);
       else return search(root->left,val);
        
    }
    void preOder(Node* root){
        if (root==nullptr) return;
        cout<<root->val<<" ";
        preOder(root->left);
        preOder(root->right);
    }
    void postOrder (Node* root){
        if (root==nullptr) return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->val<<" ";
    }

    public:
    BST(){
        root=nullptr;
    }
    void insert (int val){
        insert(root,val);
    }
    void inOrder(){
        inOrder(root);
        cout<<endl;
    }
    void deletion (int val){
        deletion(root,val);
    }
    void search(int val){
        if (search(root,val)) cout<<"Found"<<endl;
        else cout<<"Not Found"<<endl;
    }
    void preOrder (){
        preOder(root);
        cout<<endl;
    }
    void postOrder(){
        postOrder(root);
        cout<<endl;
    }
};
int main() {
    BST obj;
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1 -> Insert\n";
        cout << "2 -> Delete\n";
        cout << "3 -> Search\n";
        cout << "4 -> Inorder Traversal\n";
        cout << "5 -> Postorder Traversal\n";
        cout << "6 -> Preorder Traversal\n";
        cout << "0 -> Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int x;
                cout << "Enter value to insert: ";
                cin >> x;
                obj.insert(x);
                break;
            }
            case 2: {
                int x;
                cout << "Enter value to delete: ";
                cin >> x;
                obj.deletion(x);
                break;
            }
            case 3: {
                int x;
                cout << "Enter value to search: ";
                cin >> x;
                obj.search(x);
                break;
            }
            case 4: {
                cout << "Inorder traversal: ";
                obj.inOrder();
                break;
            }
            case 5: {
                cout << "Postorder traversal: ";
                obj.postOrder();
                break;
            }
            case 6: {
                cout << "Preorder traversal: ";
                obj.preOrder();
                break;
            }
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
