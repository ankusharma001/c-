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



int maxsum(tree * root ,int & maxi)
{
  if (root ==nullptr)
  {
    return 0;

  }

  int left = maxsum (root -> left , maxi);
  int right  = maxsum (root -> right , maxi);


  maxi = max (maxi,left +right +root ->data );

  return (root -> data )+max(left , right);

}


int maxpathsum(tree * root)
{
int maxi =0;


  maxsum(root, maxi);

  return maxi;

}



int main()
{

  tree * root = new tree (10);

  root-> left= new tree (9);
  root -> right = new tree (20);

  root -> right -> left = new tree (15);
  root -> right -> right  = new tree (7);

  cout<<maxpathsum(root);


  
  return 0;
}