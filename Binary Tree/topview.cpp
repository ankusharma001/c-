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

// 🔖
/*
Node *buildtree()
{

  queue<Node *> q;

  int a;
  cin >> a;

  Node *Nodet = new Node(a);
  q.push(Nodet);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    cout << "left of " << temp->data << endl;

    int left;
    cin>>left ;
    if (left != -1)
    {
      temp->left = new Node(left);
      q.push(temp->left);
    }

    cout << "right of " << temp->data << endl;

    int right;
    cin >> right;
    if (right != -1)
    {
      temp->right = new Node(right);
      q.push(temp-> right);
    }


  }
  return Nodet;
}

 vector<vector <int> >levelorder(Node *head)
{
  vector<vector <int> >a;

  queue<Node *> q;


  q.push(head);



  while (!q.empty())
  {

  int size = q.size();

  vector <int>aa;



  for(int i=0;i< size;i++)
  {

    Node * temp = q.front();
    q.pop();

    if(temp-> left  !=nullptr)
    {
      q.push(temp -> left );
    }

    if(temp -> right !=NULL)
    {
      q.push(temp -> right);
    }

    aa.push_back(temp -> data);


  }

  a.push_back(aa);


  }

  return a;
}
*/

// 🔖




vector < int > topview (Node * root)
{


  vector < int> ans;
    
     if(root == nullptr)

     {
      return ans;
     }

     map < int , int > mp;


     queue<pair<Node* ,int >> q;

     q.push({root , 0});

     while (!q.empty())
     {


      auto a= q.front();

      q.pop();


      Node * temp = a.first;

      int b = a.second;

      if(mp.find(b)==mp.end())
      {
        mp[b]=temp -> data;
      }


      if(temp -> left )
      {
        q.push({temp -> left , b-1});
      }

      if(temp -> right )
      {
        q.push({temp -> right , b+1});
      }



     }

     for (auto i : mp)
     {
      /* code */

      ans.push_back(i.second);
     }
     
     return ans;


  
}


// ✌️
/*
// Helper function to
// print the result
void printResult(const vector<vector<int>>& result) {
    for(auto level: result){
        for(auto node: level){
            cout << node << " ";
        }
        cout << endl;
    }
    cout << endl;
}
*/

int main()
{

  /*
 Node * head =   buildtree();


  vector <vector<int>>a = levelorder(head);

  for (int  i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < a[i].size(); j++)
    {
      cout<<a[i][j]<<" ";
    }

    cout<<endl;

  }
  */

  Node *node = new Node(1);
  node->left = new Node(2);
  node->left->left = new Node(3);
  node->left->left->right = new Node(4);
  node->left->left->right->left = new Node(5);
  node->left->left->right->right = new Node(6);

  //  🔖

  node->right = new Node(7);
  node->right->right = new Node(8);
  node->right->right->left = new Node(9);
  node->right->right->left->left = new Node(10);
  node->right->right->left->right = new Node(11);

 

  

  // Print the result
  // cout << "Vertical Traversal: "<<endl;
  // printResult(verticalTraversal);

  vector <int> ans = topview(node);

  for (int i = 0; i < ans.size(); i++)
  {

    cout<<ans[i]<<" ";
    /* code */
  }cout<<endl;

  


  return 0;
}