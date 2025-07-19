#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int value) {
        val = value;
        left = right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (!node)
            return new Node(value);

        if (value < node->val)
            node->left = insert(node->left, value);
        else if (value > node->val)
            node->right = insert(node->right, value);

        return node;
    }

    Node* deleteNode(Node* node, int value) {
        if (!node) return node;

        if (value < node->val)
            node->left = deleteNode(node->left, value);
        else if (value > node->val)
            node->right = deleteNode(node->right, value);
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = minValueNode(node->right);
            node->val = temp->val;
            node->right = deleteNode(node->right, temp->val);
        }
        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left)
            current = current->left;
        return current;
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (!node) return;
        cout << node->val << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->val << " ";
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void deleteValue(int value) {
        root = deleteNode(root, value);
    }

    void printInOrder() {
        inorder(root);
        cout << endl;
    }

    void printPreOrder() {
        preorder(root);
        cout << endl;
    }

    void printPostOrder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree bt;

    bt.insert(50);
    bt.insert(30);
    bt.insert(20);
    bt.insert(40);
    bt.insert(70);
    bt.insert(60);
    bt.insert(80);

    cout << "Inorder traversal: ";
    bt.printInOrder();

    cout << "Preorder traversal: ";
    bt.printPreOrder();

    cout << "Postorder traversal: ";
    bt.printPostOrder();

    bt.deleteValue(20);
    cout << "After deleting 20 (Inorder): ";
    bt.printInOrder();

    bt.deleteValue(30);
    cout << "After deleting 30 (Inorder): ";
    bt.printInOrder();

    bt.deleteValue(50);
    cout << "After deleting 50 (Inorder): ";
    bt.printInOrder();

    return 0;
}
