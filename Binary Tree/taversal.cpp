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
    this -> left = left;
    this -> right = right;
  }
};

// traversal

// DFS (Death first search)
// Inorder traversal (L Ru R)
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

// inorder traversal in intrarive

void inorderit(bnode *head)
{

  if (head != NULL)
  {
    return;
  }

  stack<bnode *> st;

  bnode *node = head;
  vector<int> inorder;

  while (true)
  {
    if (node != NULL)
    {
      st.push(node);
      node = node->left;
    }
    else
    {
      if (st.empty() == true)
      {
        break;
      }
      node = st.top();
      st.pop();
      inorder.push_back(node->data);
      node = node->right;
    }
  }

  for (int i = 0; i < inorder.size(); i++)
  {
    cout << inorder[i] << " ";
  }
}



// Preorder Traversal (Ru L R)
void preorder(bnode *head)
{

  if (head == NULL)
  {
    return;
  }

  cout << head->data << " ";
  preorder(head->left);
  preorder(head->right);
}
// preorder traverasal itrative

vector<int> preorderit(bnode *root)
{

  vector<int> preorde;

  if (root == NULL)
  {
    return preorde;
  }

  stack<bnode *> pre;

  pre.push(root);

  while (!pre.empty())
  {
    root = pre.top();

    pre.pop();

    preorde.push_back(root->data);

    if (root->right != NULL)
    {
      pre.push(root->right);
    }

    if (root->left != NULL)
    {
      pre.push(root->left);
    }
  }

  return preorde;
}


// postorder traversal ( L R Ru)

void postorder(bnode *head)
{

  if (head == NULL)
  {
    return;
  }
  postorder(head->left);
  postorder(head->right);
  cout << head->data << " ";
}

// postorder itrative

vector<int> postorderit(bnode *root)
{
  vector<int> postorde;
  if (root == NULL)
  {
    return postorde;
  }

  stack<bnode *> post;

  bnode * curr= root;
  bnode* temp = nullptr;

  while ( curr!=NULL&& !post.empty())
  {
    
    if(curr!=NULL)
    {
      post.push(curr);
      curr= curr ->left;    
      }

      else 
      {
        temp = post.top()->right;
        if(temp==NULL)
        {
          temp = post.top();
          post.pop();
          postorde.push_back(temp->data);

          while (!post.empty()&& temp == post.top()->right)

          {
           temp = post.top();
           postorde.push_back(temp->data);
          }       


        }
        
        else 
          {
            curr=temp;
          }
      }

  }
  return postorde;   

}

vector <int> postorderitrative(bnode * root)
{

  vector <int> ans;

 
  stack<bnode*> st;
  bnode* curr = root;
  bnode* temp = nullptr;

  while (!st.empty() || curr != nullptr) {
      if (curr != nullptr) {
          st.push(curr);  // Push the current node onto the stack
          curr = curr->left;  // Move to the left child
      } else {
          temp = st.top() -> right;  

          if (temp == nullptr){
            temp = st.top();
            st.pop();
            ans.push_back(temp -> data);
            while(!st.empty() && temp == st.top() -> right)
            {
              temp = st.top();
               st.pop();
               ans.push_back(temp->data);
            }

           } else {
            curr = temp;
          }
      }
  }



  // stack<bnode*> st2;

  // st1.push(root);

  // while (!st1.empty())
  // {
  //   bnode * temp = st1.top();
  //   st1.pop();
  //   st2.push(temp);
  //   if(temp-> left )
  //   {
  //     st1.push(temp -> left);
  //   }
  //   if (temp -> right)
  //   {
  //     st1.push(temp -> right);
  //   }
  // }
  // while (!st2.empty())
  // {
  //   ans.push_back(st2.top() ->data);
  //   st2.pop();
  // }




  return ans;

}
// BFS (Breath first search )
//  traversal on level wise

vector <int> allorderinone (bnode * root)
{
  
}

int main()
{

  // string str ;
  // getline(cin,str);
  
  // cout<<str;

  bnode* second = new bnode(2);
  bnode* third = new bnode(3);
  bnode* first = new bnode(1, second, third);
  
  bnode* fourth = new bnode(4);
  bnode* fifth = new bnode(5);
  bnode* sixth = new bnode(6);
  bnode* seventh = new bnode(7);
  
  second->left = fourth;
  second->right = fifth;
  third->left = sixth;
  third->right = seventh;
  

  vector<int> travelsal= postorderitrative(first);

  for(auto i : travelsal )
  {
    cout << i<< " ";
  }


  

  // preorder(first);
  // cout << endl;
  // inorder(first);
  // cout << endl;
  // postorder(first);
  // cout<<endl;
  // inorderit(first);

  // vector<int> traversal = postorderit(first);

  // for (int i = 0; i < traversal.size(); i++)
  // {
  //   cout << traversal[i] << " ";
  // }

  return 0;
  
}