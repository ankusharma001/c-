#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
void pattern ()
{

  vector < vector <int>> ans;
  queue <int> q;

  q.push(root);

  while (!q.empty())
  {
    int size = q.size();

    vector <int> temp;

    node* temp = q.front();
    q.pop();

    if (temp -> left )
    {
      q.push(temp -> left);
    } 
    if (temp -> right)
    {
      q.push(temp -> right);
    }
    temp.push_back(temp-> data);

  }
  ans.push_back(temp);
  
}
 
int main()
{
  //int arr[]={};
 
  //int count = sizeof(arr)/sizeof(arr[0]);
  
  
 
  pattern ();
 
  return 0;
}