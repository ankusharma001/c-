// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;


// class node {
    
//     public:
//     int data;
//     node * left; 
//     node * right;
    
    
//     node (int data )
//     {
//         this -> data= data;
//         left = nullptr;
//         right= nullptr;
//     }
//     node (int data , node * left , node * right )
//     {
//         this -> data= data;
//         this->left = left;
//         this->right= right ;
//     }
// };


// node * buildtree()
// {
    
//     int val;
//     cout << "Enter node value : ";
//     cin >> val;
    
//     if (val == -1) {
//         return nullptr;
//     }
    
//     node* root = new node(val);

//     cout << "Enter left child of " << val << endl;
//     root->left = buildtree();

//     cout << "Enter right child of " << val << endl;
//     root->right = buildtree();

//     return root;

    
// }

// void print(node * root)

// {
//     if(root==NULL)
//     {
//         return ;
//     }
    
//     cout<<root->data<<" ";
    
//     print(root->left);
//     print(root->right);
    
    
    
// }

// /*1
// 2
// 4
// -1
// -1
// -1
// 3
// 5
// -1
// -1
// 6
// -1
// -1
// */


// int main() {
    
    
//     node * root = buildtree();
    
//     print(root);

//     return 0;
// }

#include<iostream>
#include<queue> // Include the correct header for queue
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

    //  Node(int val ,Node * left , Node * right){
    //     data = val;
    //     this -> left = left;
    //    this ->  right = right;
    // }
};

int balanced(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = balanced(root->left);
    if(lh == -1)
        return -1;

    int rh = balanced(root->right);
    if(rh == -1)
        return -1;

    if(abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

void buildFormLevelOrder(Node*& root){ // Use reference to reflect changes in main
    queue<Node*> q;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "left of " << temp->data << " = ";
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "right of " << temp->data << " = ";
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main() {
    Node* root = NULL; // Declare root
    buildFormLevelOrder(root);

    if(balanced(root) > 0)
        cout << "Balanced";
    else
        cout << "Not Balanced";
    
    return 0; // Return an integer from main
}
