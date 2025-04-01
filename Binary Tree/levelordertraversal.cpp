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

vector<vector<int>> levelorder(bnode* root)
{
  vector<vector<int>> ans;
  if(root == NULL)
  {
    return ans;
  }

  queue<bnode*> q;
  q.push(root);

  while (!q.empty())
  {
    int size= q.size();
    vector<int> level;

    for (int i = 0; i < size; i++)
    {
      bnode * bnode = q.front();

      q.pop();

      if(bnode -> left !=NULL )
      {
        q.push(bnode -> left );

      }
      if( bnode -> right !=NULL)
      {
        q.push(bnode->right);
      }
      level.push_back(bnode -> data);
    }
    ans.push_back(level);
    
  }
  return ans;
  


}



bnode * build (int arr[])
{
    int size = 6;
    if(size == 0)
    {
        return NULL;
    }
    
    bnode * root = new bnode (arr[0]);
    
    queue<bnode * > q;
    q.push(root);
    int i =1;
    while (i<size)
    {
        bnode * temp = q.front ();
        q.pop();
        if(i<size){
            temp -> left = new bnode (arr[i]);
            q.push(temp -> left );
            i++;
        }if(i<size){
            temp -> right= new bnode (arr[i]);
            q.push(temp -> right );
            i++;
        }
    }
    return root;
    
    
}
bnode * buildtree()
{
  int val;

  cin>>val;

  if(val==-1)
  {
    return nullptr;
  }
  bnode * root = new bnode (val);

  queue <bnode *> q;



  q.push(root);


  while (!q.empty())
  {

    bnode * cur= q.front();

    q.pop();

    int left ,  right ;

    cin >> left;

    if(left != -1)
    {
      cur -> left = new bnode (left);
      q.push(cur-> left);

    }

    cin>> right;

    if(right !=-1)
    {
      cur -> right = new bnode (right);
      q.push(cur -> right);
    }

    if(left ==-1 && right ==-1)
    {
      break;
    }



  }

  return root;


}

int main()
{
  bnode *first = new bnode(1);

  first->left = new bnode(2);
  first->right = new bnode(3);

  first->left->right = new bnode(5);
  first->right->left = new bnode(6);

//  bnode * root =  buildtree();

    vector<vector<int>> levelorde= levelorder (first);

  
  	for(int i=0;i<levelorde.size();i++)
	{
	    for(int j=0;j<levelorde[i].size();j++)
	    {
	        cout<<levelorde[i][j]<<" ";
	    }
	    cout<<endl;
	}

  return 0;
}

// user input 

/*
bnode* constructTree() {
    int data;
    cout << "Enter the root bnode value: ";
    cin >> data;
    bnode* root = new bnode(data);
    queue<bnode*> q;
    q.push(root);

    while (!q.empty()) {
        bnode* current = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Enter left child of " << current->data << " (-1 if no left child): ";
        cin >> leftData;
        if (leftData != -1) {
            current->left = new bnode(leftData);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->data << " (-1 if no right child): ";
        cin >> rightData;
        if (rightData != -1) {
            current->right = new bnode(rightData);
            q.push(current->right);
        }
    }

    return root;
}
*/


class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        // Get dimensions of the matrix
        int n = matrix.size();    // number of rows
        int m = matrix[0].size(); // number of columns
        
        // Create a DP table with same dimensions as matrix
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        // Variable to store total count of squares
        int ans = 0;
        
        // Initialize first column of DP table
        // Each cell in first column can only form a 1x1 square if matrix[i][0] = 1
        for (int i = 0; i < n; i++) {
            dp[i][0] = matrix[i][0];
            ans += dp[i][0];  // Add the count of squares from the first column
        }
        
        // Initialize first row of DP table
        // Each cell in first row can only form a 1x1 square if matrix[0][j] = 1
        for (int j = 1; j < m; j++) {
            dp[0][j] = matrix[0][j];
            ans += dp[0][j];  // Add the count of squares from the first row
        }
        
        // Fill the DP table for remaining cells
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                // Only process if current cell in matrix is 1
                if(matrix[i][j] == 1) {
                    // For each cell, check the minimum value among:
                    // 1. Left cell (dp[i][j-1])
                    // 2. Top cell (dp[i-1][j])
                    // 3. Top-left diagonal cell (dp[i-1][j-1])
                    // Add 1 to this minimum value
                    dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
                }
                // Add current cell's value to total count
                ans += dp[i][j];
            }
        }
        
        // Return total count of squares
        return ans;
    }
};