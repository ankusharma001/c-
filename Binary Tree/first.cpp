// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
binary tree:
hierarchical data structure

only two braches

parent
left child , rigth child , siblinf node ,leaf
ancestor

level , subtree
*/

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
  // bnode * second = new bnode (2);
  // bnode* third = new bnode (3);
  // bnode * frist = new bnode (1,second , third);

  bnode *first = new bnode(4);

  first->left = new bnode(5);
  first->right = new bnode(6);

  first->left->right = new bnode(7);
  first->right->left = new bnode(8);

  return 0;
}