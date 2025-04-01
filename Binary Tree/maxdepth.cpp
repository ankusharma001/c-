#include <bits/stdc++.h>

using namespace std;

class bnode
{
public:
  int data;
  bnode *left;
  bnode *right;

  bnode(int data)
  {
    this->data = data;
    left = nullptr;
    right = nullptr;
  }

  bnode(int data, bnode *left, bnode *right)
  {
    this->data = data;
   this ->  left = left;
    this ->  right = right;
  }
};

bnode* arrayToTree(int arr[], int size) {
    if (size == 0)
    {
        return nullptr;
    }
    // Create a queue to store parent nodes
    queue<bnode*> q;

    // Create a root node with the first element of the array
    bnode* root = new bnode(arr[0]);
    q.push(root);

    // Index to iterate over the array
    int i = 1;

    // Build the binary tree level by level
    while (!q.empty() && i < size) {
        // Get and remove the front node from the queue
        bnode* parent = q.front();
        q.pop();

        // Create left child if not NULL
        if (arr[i] != -1) {
            parent->left = new bnode(arr[i]);
            q.push(parent->left);
        }
        i++;

        // Create right child if not NULL and array boundary is not crossed
        if (i < size && arr[i] != -1) {
            parent->right = new bnode(arr[i]);
            q.push(parent->right);
        }
        i++;
    }

    return root;
}

int maxdepth (bnode * root )
{
  if(root==NULL)
  {
    return 0;
  }
 int  lh = maxdepth(root->left);
 int  lr = maxdepth(root->right);

 return 1+ max(lh,lr) ;



}

int main()
{


  bnode *first = new bnode(4);

  first->left = new bnode(5);
  first->right = new bnode(6);

  first->left->right = new bnode(7);
  first->left->left = new bnode(9);
  first->right->left = new bnode(8);

  cout<<maxdepth(first); 


  return 0;
}