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





bool Symatriccheck (Node * rightt , Node * leftt)
{

  if(leftt ==NULL && rightt == NULL)
  {
    return true;
  }

  if(leftt -> data != rightt -> data )
  {
    return false ;
  }


  return Symatriccheck(leftt -> left , rightt -> right ) && Symatriccheck (leftt -> right , rightt -> left );

}

bool Issymatric (Node * root )
{

  return root ==NULL || Symatriccheck (root -> right , root -> left);


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

    if(Issymatric(node))

    {
      cout<<" yes ";
    }
    else 

    {
      cout<<"NO";
    }

    


}




