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

class tree1 {
  public :
  int data1 ;
  tree1 * left1 ;
  tree1 * right1 ;
  tree1 (int data1)
  {
    this -> data1 = data1;
     left1 = right1 = nullptr;
  }
  tree1 (int data1 , tree1 * left1 , tree1 * right1 )
  {
    this->data1 = data1;
    this->  left1 = left1;
    this -> right1= right1;
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



bool same (tree * root , tree1 * root1)
{
  if (root == nullptr && root1 == nullptr) {
    return true;
  }

  if (root == nullptr || root1 == nullptr) {
    return false;
  }
  
  if(root->data!=root1->data1)
  {
    return false;

  }

  return  same (root ->left , root1-> left1 )&&
   same (root->right , root1 -> right1 );
   
  


}




int main()
{

  tree * root = new tree (10);

  root-> left= new tree (9);
  root -> right = new tree (20);

  root -> right -> left = new tree (15);
  root -> right -> right  = new tree (7);

// 🔖

    tree1 * root1 = new tree1 (10);

  root1-> left1= new tree1 (9);
  root1 -> right1 = new tree1 (20);

  root1 -> right1 -> left1 = new tree1 (15);
  root1 -> right1 -> right1  = new tree1 (4);

  if (same(root , root1))
  {
    cout<<"yes";


  }
  else 
  {
    cout<<"no";
  }



  
  return 0;
}