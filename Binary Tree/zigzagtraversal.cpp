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


 /*
void buildFormLevelOrder(tree*& root){ // Use reference to reflect changes in main
    queue<tree*> q;
    int data;
    cin >> data;
    root = new tree(data);
    q.push(root);

    while(!q.empty()){
        tree* temp = q.front();
        q.pop();

        cout << "left of " << temp->data << " = ";
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new tree(leftData);
            q.push(temp->left);
        }

        cout << "right of " << temp->data << " = ";
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new tree(rightData);
            q.push(temp->right);
        }
    }
}
*/



vector<vector<int >> zigzag (tree* root )
{
  vector <vector<int>> arr;

  if(root == nullptr)
  {
    return arr;
  }



  queue<tree*> q;
  q.push(root);

  bool flag = true;

  while (!q.empty())
  {
    int size = q.size();
    vector<int> arr1(size);

    for (int i = 0; i < size; i++)
    {
      tree * node = q.front();
      q.pop();

      int index=0;

      if(flag == true)
      {
        index =i;

      }

      else 
      {
        index = size- 1-i;
      }

      arr1[index]= node -> data;

      if(node -> left != nullptr)
      {
        q.push(node ->left );
      }
      if(node -> right != nullptr)
      {
        q.push(node ->right );
      }


    }

    flag = !flag;

    arr.push_back(arr1);
    
  }

  return arr;
}








int main()
{

  tree * root = new tree (-10);

  root-> left= new tree (9);
  root -> right = new tree (20);

  root -> right -> left = new tree (15);
  root -> right -> right  = new tree (7);



vector <vector<int>> out= zigzag(root);


for (int  i = 0; i < out.size(); i++)
{

  for (int j = 0; j < out[i].size(); j++)
  {
    cout<<out[i][j]<<" ";
  }
  cout<<endl;
}


  
  return 0;
}