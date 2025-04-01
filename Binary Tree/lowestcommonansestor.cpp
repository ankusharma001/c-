
#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
class tree {
  public :
  int data ;
  tree * left ;
  tree * right ;
  tree (int data)
  {
    this -> data = data;
     left = right = nullptr;
  }
  tree (int data , tree * left , tree * right )
  {
    this->data = data;
    this->  left = left;
    this -> right= right;
  }
};

tree * Lca (tree * root , int a , int b )

{
  if (root == NULL || root -> data == a || root -> data  == b  )
  {
    return root ;
  }

  tree* left = Lca (root -> left, a, b);

  tree * right = Lca (root -> right ,a, b);

  if (left == NULL)
  {
    return right;
  }

  if( right == NULL)
  {
    return left ;
  }
  else 
  {
    return root ;
  }

}

int main()
{

  tree * root = new tree (1);

  root-> left= new tree (2);
  root -> right = new tree (3);

  root -> right -> left = new tree (4);
  root -> right -> left -> right = new tree (8);

  root -> right -> right  = new tree (5);

  root -> right -> right -> left   = new tree (6);
  root -> right -> right -> right   = new tree (7);






  tree *ans =Lca(root, 8 , 7);

  cout << ans -> data;

  
  return 0;
}