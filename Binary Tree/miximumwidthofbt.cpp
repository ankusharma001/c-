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

int maxwidth (tree* root )

{

  if (root == NULL)
  {
    return 0;
  }

  int ans =0;
  queue <pair<tree* ,int>> q;
  q.push({root, 0});

  while (!q.empty())
  {
    int size = q.size();

    int mmin = q.front().second;

    int first , last;
    
    for (int i = 0; i < size; i++)
    {
      int cur_id = q.front().second - mmin;
      tree* temp = q.front().first;


    q.pop();

    if(i==0)
    {
      first = cur_id;

    }
    if (i== size -1)
    {
      last = cur_id;
    }

    if (temp -> left )
    {
      q.push({temp -> left , cur_id *2 +1});
    }
    if(temp -> right )
    {
    q.push({temp -> right ,  cur_id *2 +2});
    }
    }
    ans = max (ans , last - first +1);
     
  }
  return ans;
   
}



int main()
{


  tree *root = new tree(1);
  root-> left  = new tree(1);
  root-> left-> left   = new tree(1);
  root-> left -> left -> left  = new tree(1);

  root -> right = new tree(1);
  root -> right-> right = new tree(1);
  root -> right -> right -> right= new tree(1);


  cout<< maxwidth(root);



  return 0;


}
