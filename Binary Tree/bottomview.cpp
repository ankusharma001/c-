#include <bits/stdc++.h>
#include <iostream>

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

vector < int> bottomview (Node * root )
{
  vector <int > ans; 

  map <int  ,int > mp;

  queue <pair < Node * ,int >> q;

  q.push({root , 0});
  
  while (!q.empty ())
  {

    auto a= q.front ();
    q.pop();
    Node * temp = a.first ;

    int b = a.second;

    mp[b]= temp -> data;

     if(temp -> left )
     {
      q.push({temp -> left , b-1});
     }

     if(temp -> right)
     {
      q.push({temp-> right , b+1 });

     }


  }
  for (auto i : mp )

  {
    ans.push_back(i.second);
  }

  return ans ;
  



}

int main()
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


    vector < int> bottom = bottomview(node);

    for(int i = 0 ; i< bottom.size();i++)
    {
      cout<<bottom[i];

    }


    return 0;

  }