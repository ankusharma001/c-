#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
  int data;
  Node *left;
  Node *right;
  Node(int data)

  {
    this->data = data;
    left = right = nullptr;
  }
  Node(int data, Node *left, Node *right)
  {
    this->data = data;
    this->left = left;

    this->right = right;
  }
};


void rightside (Node * root , int level  , vector <int>& ans  )
{
  
  if(root == NULL)
  {
    return ;
  }

  if( level == ans.size())

  {
    ans.push_back(root -> data);

  }

  rightside ( root -> right , level +1,  ans );

  rightside (root -> left , level +1  ,ans );




}

vector < int> rightview(Node *root )
{
  vector < int> ans ;

  rightside(root , 0 , ans );

  return ans;
}

int main ()
{


    Node * node = new Node(1);
    node->left = new Node(2);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->left->right->left = new Node(8);
    node->left->right->right = new Node(9);

    //  🔖

    node->right = new Node(3);
    node->right->right = new Node(7);
    node->right->left  = new Node(6);
    // node->right->right->left = new Node(9);
    // node->right->right->left->left = new Node(10);
    // node->right->right->left->right = new Node(11);

    vector <int> right = rightview ( node   );

    for (int i = 0; i < right.size(); i++)
    {
      cout<< right[i]<< " ";
    }
    


}
