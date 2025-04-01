#include <bits/stdc++.h>

using namespace std;

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

/*
bnode *converttotree(vector<int> &arr)
{
  bnode *head = new bnode(arr[0]);
  bnode *temp = head;

  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] == -1)
    {
      continue;
    }
    else
    {
    }
  }
}
*/

bnode *buildTree(vector<int> &nums)
{
  if (nums.empty())
  {
    return NULL;
  }


  bnode *root = new bnode(nums[0]);
  
  queue<bnode *> q;
  
  q.push(root);
  
  int i = 1;
  
  while (i < nums.size())
  {
  
    bnode *curr = q.front();
    q.pop();
  
    if (i < nums.size())
    {
      curr->left = new bnode(nums[i++]);
      q.push(curr->left);
    }
  
    if (i < nums.size())
    {
      curr->right = new bnode(nums[i++]);
      q.push(curr->right);
    }
  }
  return root;
}


void inorder(bnode *head)
{

  if (head == NULL)
  {
    return;
  }
  inorder(head->left);
  cout << head->data << " ";

  inorder(head->right);
}
int main()
{
  vector<int> arr = {1, 2, 3, -1};

  bnode *head = buildTree(arr);

  inorder(head);

  return 0;
}