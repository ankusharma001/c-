#include <bits/stdc++.h>
using namespace std;

class tree {


  public:
  int data ;
  tree* left ;
  tree * right ;

  tree (int data )
  {
    this ->data= data ;
     this ->left = nullptr;
     this ->right = nullptr;
  }

  tree (int data , tree * left , tree * right )
  {
    this-> data = data;
    left = left ;
    right= right;
  }



};

tree * childrensumprop (tree * root)
{

  
}


int main()
{


  tree *root = new tree(4);

  root->left = new tree(5);
  root->right = new tree(6);

  root->left->right = new tree(7);
  root->left->left = new tree(9);
  root->right->left = new tree(8);
  root->right->left-> left = new tree(8);
  root->right->left-> left ->right = new tree(8);





  return 0;


}
