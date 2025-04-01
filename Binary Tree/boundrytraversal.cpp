#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class root
{

public:
  int data;
  root *left;
  root *right;
  root(int data)

  {
    this->data = data;
    left = right = nullptr;
  }
  root(int data, root *left, root *right)
  {
    this->data = data;
    this->left = left;

    this->right = right;
  }
};

// 🔖
/*
root *buildtree()
{

  queue<root *> q;

  int a;
  cin >> a;

  root *roott = new root(a);
  q.push(roott);

  while (!q.empty())
  {
    root *temp = q.front();
    q.pop();

    cout << "left of " << temp->data << endl;

    int left;
    cin>>left ;
    if (left != -1)
    {
      temp->left = new root(left);
      q.push(temp->left);
    }

    cout << "right of " << temp->data << endl;

    int right;
    cin >> right;
    if (right != -1)
    {
      temp->right = new root(right);
      q.push(temp-> right);
    }

  
  }
  return roott;
}

 vector<vector <int> >levelorder(root *head)
{
  vector<vector <int> >a;
  
  queue<root *> q;
  
  
  q.push(head);



  while (!q.empty())
  {

  int size = q.size();

  vector <int>aa;



  for(int i=0;i< size;i++)
  { 

    root * temp = q.front();
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
bool isleaf(root * rot)
{
  return !rot->left && !rot-> right;
}

void addleft(root * rot , vector <int > &ans ) 

{

  root * cur = rot -> left;

  while (cur)
  {
    if(!isleaf(cur))
    {
      ans .push_back(cur->data);
    }

    if(cur ->left)
    {
      cur = cur -> left ;
    }
    else 
    {
      cur = cur -> right ;

    }
  }
  
  

}


void addright(root * rot , vector <int > &ans ) 

{

  root * cur = rot -> right;

  vector< int> temp; 

  while (cur )

  {
    /* code */
    if(!isleaf(cur ))
    {
    temp.push_back(cur-> data);
    }
    if(cur -> right)
    {
      cur = cur ->right;
    }
    else 
    {
      cur =  cur -> left ;
    }
  }

  for (int i = temp.size()-1;  i >=0; i--)
  {
    /* code */
    ans.push_back(temp[i]);
  }
  
  
  

}



void leaf(root * rot , vector <int > &ans)
{
  if(isleaf(rot))
  {
    ans.push_back(rot -> data);
    return;
  }
  if(rot -> left )
  {
    leaf(rot -> left , ans );
  }
  if(rot -> right )
  {
    leaf (rot -> right  , ans );
  }


}

vector <int> printboundry (root * rot )
{

  vector <int> ans ;
  if (rot==nullptr)
  {
    return ans;
  }

  if(!isleaf (rot))
  {
    ans.push_back(rot-> data);
  }

  addleft(rot, ans);
  leaf(rot, ans);
  addright(rot,ans);
  return ans;
}





int main()
{

  /*
 root * head =   buildtree();


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
  

  root * rot = new root (1);
   rot-> left  = new root (2);
  //  rot-> left-> left   = new root (3);
  //  rot-> left->left -> right   = new root (4);
  //  rot-> left->left -> right-> left    = new root (5);
  //  rot-> left->left -> right-> right   = new root (6);

  //  🔖

   rot-> right     = new root (3);
  //  rot-> right ->right    = new root (8);
  //  rot-> right ->right-> left     = new root (9);
  //  rot-> right ->right-> left -> left     = new root (10);
  //  rot-> right ->right-> left -> right     = new root (11);

    vector <int> ans = printboundry(rot);

    for (int i = 0; i < ans.size(); i++)
    {

      cout<<ans [i]<< " ";
      /* code */
    }
    


   

  return 0;
}