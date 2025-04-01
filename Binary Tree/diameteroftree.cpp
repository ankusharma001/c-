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
    left = nullptr;
    right = nullptr;
  }

  tree (int data , tree * left , tree * right )
  {
    this-> data = data;
    left = left ;
    right= right;
  }



};


// /brute force 
int calclheight(tree * root , int &diameter )
{

  if(root==NULL)
  {
    return 0;
  }

  int lh = calclheight (root-> left,diameter);

  int rr = calclheight (root -> right , diameter);

  diameter = max (diameter , lh+rr);


   return max (lh , rr)+1;

}

int diametr(tree * root )
{

int diameter=0;

  calclheight(root, diameter );

  return diameter ;
}


int main()
{

 


  tree *root = new tree(4);

  root->left = new tree(5);
  root->right = new tree(6);

  root->left->right = new tree(7);
  root->left->left = new tree(9);
  root->right->left = new tree(8);

  int maxi =0;

cout<< diametr (root );

  




  return 0;


}