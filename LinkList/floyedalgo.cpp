#include <bits/stdc++.h>
 
using namespace std;
 
class node
{
public:
  int data;
  node *next;

  node(int data, node *next)
  {
    this->data = data;
    this->next = next;
  }





  node(int data)
  {
    this->data = data;
    next = nullptr;
  }
};

void print(node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

node * converttoarr(vector<int> &arr)
{
  node * head = new node (arr[0]);
  node * mover = head;

  for (int i = 1; i < arr.size(); i++)
  {
    node * temp = new node (arr[i]);
    mover->next= temp ;
    mover = temp;
  }

  
  return head;
  

}

void  middle(node * head )

{
  node * slow= head;
  node * fast= head -> next ;

  while (fast!=NULL&&fast-> next!=NULL)
  {
    slow = slow-> next;
    fast= fast -> next -> next;
  }

  cout<< slow->data;
  
}
 
int main()
{
  vector<int> arr={1,2,3,4,5};

  node * head = converttoarr(arr);

   middle(head);

  // print(head);

 
  return 0;
}