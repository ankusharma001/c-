#include <bits/stdc++.h>
using namespace std;

class Tree {
public:
    int data;
    Tree* right;
    Tree* left;

    Tree(int data) {
        this->data = data;
        right = left = nullptr;
    }
};

void populate(Tree*& node, istream& in) {
    if (!node) return;  

    cout << "Do you want to enter left of " << node->data << "? (1 for Yes, 0 for No): ";
    bool left;
    in >> left;
    
    if (left) {
        cout << "Enter left child of " << node->data << ": ";
        int a;
        in >> a;
        node->left = new Tree(a);
        populate(node->left, in); 
    }

    cout << "Do you want to enter right of " << node->data << "? (1 for Yes, 0 for No): ";
    bool right;
    in >> right;
    
    if (right) {
        cout << "Enter right child of " << node->data << ": ";
        int a;
        in >> a;
        node->right = new Tree(a);
        populate(node->right, in);  
    }
}

void populate(Tree*& root) { 
    cout << "Enter the root value: ";
    int a;
    cin >> a;
    root = new Tree(a); 
    populate(root, cin);
}

void inorder(Tree* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void prettydisplay(Tree* root, int level) {
    if (root == nullptr) return;

    prettydisplay(root->right, level + 1);

    // Indentation for current level
    for (int i = 0; i < level; i++) {
        cout << "|  ";  // 4 spaces per level
    }

    cout << "|---> " << root->data << endl;

    prettydisplay(root->left, level + 1);
}


int main() {
    Tree* root = nullptr;

    populate(root);  

    cout << "\nInorder traversal of the tree: ";
    inorder(root);
    cout << endl;

    prettydisplay( root , 0);

    return 0;
}
