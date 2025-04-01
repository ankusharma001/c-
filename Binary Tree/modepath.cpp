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

  bnode(int data, bnode *left_, bnode *right_)
  {
    this->data = data;
    left = left_;
    right = right_;
  }
};


        // for (const auto& entry : count) {
        //     if (entry.second > maxFreq) {
        //         maxFreq = entry.second;
        //         modes.clear();
        //         modes.push_back(entry.first);
        //     } else if (entry.second == maxFreq) {
        //         modes.push_back(entry.first);
        //     }
        // }


void modepath(bnode* root , unordered_map<int, int> &count )
{
  if( root ==NULL)
  {
    return ; 
  }

  // map<int, int> mp;

  count [root -> data]++;
  modepath (root->left ,count);
  modepath(root -> right, count);


  

}
     
vector<int> ans(bnode* root)
{
unordered_map<int, int> mp;

modepath(root , mp);

  int maxval =0;

  vector<int> modes;

  for (auto& i : mp)
  {
    if (i.second> maxval)
    {
      maxval = i.second;
      modes.clear();
      modes.push_back(i.first);
    }

    else if ( i.second == maxval)
    {
      modes.push_back(i.first);
    }


  }return modes;
  
}

vector <int> modepath(bnode* root, int &max , int &freq, int& current , vector < int> &ans )
{

  

  if ( root == NULL)
  {
    return ans;
  }

   modepath ( root -> left , max ,freq,current,  ans );

 
    if( root-> data != current)
    {
      current  = root -> data;
      freq = 1 ;
    }
    else 
    {
      freq++;
    }
  
  if (max < freq)
  {
    max = freq;
    ans.clear();
    ans.push_back(current); 

  }
  else if ( max == freq )
  {
    ans.push_back(root -> data);

  }

   modepath ( root -> right , max , freq,current , ans);

   return ans ;

}
  



int main()
{
  bnode * first = new bnode(4);

  first->left = new bnode(2);
  first->left -> left= new bnode(1);
  first->right = new bnode(6);

  first->left->right = new bnode(2);
  first->right->left = new bnode(5);

  first->right->right = new bnode(7);
  first->right->left -> right = new bnode(6);

//  bnode * root =  buildtree();

 vector <int> anss; 
 int max ; int freq;
 int curr =0;
  vector<int> mm = modepath(first , max, freq,  curr,  anss);
 for (int i = 0; i < mm.size(); i++)
 {
  cout<<mm[i];
 }
 

    

  return 0;
}
