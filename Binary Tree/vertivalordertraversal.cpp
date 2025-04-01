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

// Function to perform vertical order traversal
// and return a 2D vector of node values
vector<vector<int>> findVertical(Node *root)
{
  // Map to store nodes based on
  // vertical and level information
  map<int, map<int, multiset<int>>> nodes;

  // Queue for BFS traversal, each
  // element is a pair containing node
  // and its vertical and level information
  queue<pair<Node *, pair<int, int>>> todo;

  // Push the root node with initial vertical
  // and level values (0, 0)
  todo.push({root, {0, 0}});

  // BFS traversal
  while (!todo.empty())
  {
    // Retrieve the node and its vertical
    // and level information from
    // the front of the queue
    auto p = todo.front();
    todo.pop();
    Node *temp = p.first;

    // Extract the vertical and level information
    // x -> vertical
    int x = p.second.first;
    // y -> level
    int y = p.second.second;

    // Insert the node value into the
    // corresponding vertical and level
    // in the map
    nodes[x][y].insert(temp->data);

    // Process left child
    if (temp->left)
    {
      todo.push({temp->left,
                 {// Move left in
                  // terms of vertical
                  x - 1,
                  // Move down in
                  // terms of level
                  y + 1}});
    }

    // Process right child
    if (temp->right)
    {
      todo.push({temp->right,
                 {// Move right in
                  // terms of vertical
                  x + 1,
                  // Move down in
                  // terms of level
                  y + 1}});
    }
  }

  // Prepare the final result vector
  // by combining values from the map
  vector<vector<int>> ans;
  for (auto p : nodes)
  {
    vector<int> col;
    for (auto q : p.second)
    {
      // Insert node values
      // into the column vector
      col.insert(col.end(), q.second.begin(), q.second.end());
    }
    // Add the column vector
    // to the final result
    ans.push_back(col);
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

  vector<vector<int>> verticalTraversal =
      findVertical(node);

  for (auto level :verticalTraversal  )
  {
    for (auto node : level)
    {
      cout << node << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Print the result
  // cout << "Vertical Traversal: "<<endl;
  // printResult(verticalTraversal);

  return 0;
}