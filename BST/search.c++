#include <bits/stdc++.h>

using namespace std;

//bst is in lesser  =left < greatr = right  order

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

  bnode(int data, bnode *left_, bnode *right_)
  {
    this->data = data;
    left = left_;
    right = right_;
  }
};


int print( bnode * root , int a )
{

  while ( root != NULL && root -> data!= a)
  {
    if (root -> data > a )
    {
      root = root -> left;
      

    }
    else 
    {
       root = root -> right;
    }
  }

  return root -> data;


}




int main()
{
  bnode * first = new bnode(4);

  first->left = new bnode(2);
  first->left -> left= new bnode(1);
  first->right = new bnode(6);

  first->left->right = new bnode(2);
  first->right->left = new bnode(5);

  first->right->right = new bnode(7);
  first->right->left -> right = new bnode(6);



    

  return 0;
}
