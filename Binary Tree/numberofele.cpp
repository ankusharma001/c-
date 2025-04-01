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
    left = left;
    right = right;
  }
};


int main()
{
  
  bnode *first = new bnode(4);

  first->left = new bnode(5);
  first->right = new bnode(6);

  first->left->right = new bnode(7);
  first->left->left = new bnode(9);
  first->right->left = new bnode(8);

  

}