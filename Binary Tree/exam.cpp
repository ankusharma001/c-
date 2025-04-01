// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class node {
    
    public:
    int data;
    node * left; 
    node * right;
    
    
    node (int data )
    {
        this -> data= data;
        left = nullptr;
        right= nullptr;
    }
    node (int data , node * left , node * right )
    {
        this -> data= data;
        this->left = left;
        this->right= right ;
    }
};


node * buildtree()
{
    
    int val ;
    // cout<<"enter val ";
    
    cin>>val;
    
    if(val==-1)
    {
        return nullptr;
    }
    
    node* root= new node ( val);
    
    root -> left = buildtree();
    
    root -> right = buildtree();
    
    return root;
}

void print(node * root)

{
    if(root==NULL)
    {
        return ;
    }
    
    cout<<root->data<<" ";
    
    print(root->left);
    print(root->right);
    
    
    
}


int height ( node * root)
{
    if(root== NULL)

    {
        return 0;
    }
    int left  = height (root-> left );
    int right = height(root-> right );
    
    return 1 +max(left , right ); 
    
}



int sum(node* root) {
    if (root == nullptr) {
        return 0;
    }
   
   
   int count =  root-> data;
   
  count +=  sum (root-> left );
   count += sum (root -> right);
   
   return count;
   
   
}
/*1 2 4 -1 -1 -1 3 5 -1 -1 6 -1 -1
*/
vector <vector<int> > level(node * root)
{
    vector <vector<int> > ans;
    
    if(root==NULL)
    {
        return ans;
    }
    
    queue<node*> q;
    
    q.push(root);
    while(!q.empty())
    {
        
        int size= q.size();
        vector<int> level;
        
        for(int i=0;i<size;i++)
        {
            node * bnode = q.front ();
            
            q.pop();
            
            if(bnode ->left !=NULL)
            {
                q.push(bnode -> left );
            }
            if(bnode-> right!=NULL)
            {
                q.push(bnode-> right);
            }
            
            level.push_back (bnode-> data);
        }
        
        ans.push_back(level);
    }
    
    return ans;
}


vector <vector<int> > zigzag(node * root)

{
    
    vector <vector<int>> ans;
    
    if(root==NULL)
    {
        return ans;
    }
    queue <node * > q;
    
    q.push(root);
    
    bool flag = true;
    
    while(!q.empty())
    {
        

        int size= q.size();
        vector<int>  arr(size);
        for(int i=0;i< size;i++)
        {
            node * bnode = q.front();
            q.pop();
            
            
            int index ;
            
            if(flag )
            {
                index = i;
                
            }
            else 
            {
                index = size-1-i;
            }
            arr[index ]= bnode -> data;
            
            if(bnode -> left!=NULL)
            {
                q.push(bnode -> left );
            }
            if(bnode -> right != NULL)
            {
                q.push(bnode -> right );
            }
        }
        flag = !flag;
        ans.push_back(arr);
    }
    
    return ans;
    
    
}


vector < int> topview (node * root )
{
  vector < int > arr;

  if(root==NULL)
  {
    return arr;
  }

  queue<pair<node* , int > > q;
  q.push({root,0});

  map<int,int> mp;

  while (!q.empty())
  {
    auto it = q.front();

    q.pop();

    node * bnode = it.first ;
    int line = it.second;

    if(mp.find(line)==mp.end())
    {
      mp[line]=bnode-> data;
    }

    if(bnode -> left != NULL)
    {
      q.push({bnode ->left , line -1});
    }
    if( bnode -> right!=NULL )
    {
      q.push({bnode -> right, line +1 });
    }
  }

  for(auto it: mp )
  {
    arr.push_back(it.second);
  }
   
   return arr;
}


vector <int> bottomview (node * root)
{
    vector <int> arr;

    if(root==NULL)
    {
        return arr;
    }

    queue<pair<node * , int>> q;

    map < int, int > mp;

    q.push({root, 0});

    while (!q.empty())
    {
      auto it = q.front ();
      q.pop();

      int line = it.second;

      node * bnode = it .first;

      mp[line]=bnode -> data;

      if(bnode -> left )
      {
        q.push({bnode -> left , line -1});
        
      }
      if(bnode -> right )
      {
        q.push({bnode -> right , line +1});
      }
     
    }
    
    for(auto it : mp )
    {
        arr.push_back(it.second);
    }
    return arr;




}


int maxi(node * root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }

    int left = maxi (root -> left );

    int right = maxi (root -> right );

    int l = min (root -> data , min (right , left )); 

    return l;
}


int count (node * root )
{


    if(root ==NULL)
    {
        return 0;
    }
    

    
    int l =count (root -> left );
   int r = count (root -> right);
   
    return 1 + l +r ;

}
int main() {
    
    
    node * root = buildtree();
    
    cout<< height (root)<<endl ;
    
    cout<<sum(root)<<endl;
    
    
  // vector<vector<int>> levelor= zigzag(root);
   
  // for(int i=0;i< levelor.size();i++)
  // {
  //     for(int j=0;j<levelor[i].size();j++)
  //     {
  //         cout<<levelor[i][j]<< " ";
  //     }
  //     cout<<endl;
       
  // }

//   vector <int> tp= bottomview(root);

//   for (int i = 0; i < tp.size(); i++)
//   {
//     cout<<tp[i]<<" ";
//   }
  
  cout<<maxi (root)<<" ";  

  cout<<count(root);
    
    // print(root);

    return 0;
}