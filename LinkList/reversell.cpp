#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class node
{

public:
  int data;
  node *next;

  node(int data1, node *next1)
  {
    data = data1;
    next = next1;
  }
  node(int data1)
  {
    data = data1;
    next = nullptr;
  }
  /* data */
};

void print(node *head)
{

  while (head != NULL)
  {
    cout << head->data << "-> ";
    head = head->next;
  }
  cout << "{NULL//END}" << endl;
}

node *converttoarr(vector<int> arr)
{
  node *head = new node(arr[0]);
  node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    node *temp = new node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

node *reversell(node *head)
{
  node *temp = head;
  stack<int> val;

  while (temp != NULL)
  {
    val.push(temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    temp->data = val.top();
    val.pop();
    temp = temp->next;
  }
  return head;
}

node *reverselloptimized(node *head)
{
  node *temp = head;
  node *prev = nullptr;

  while (temp != NULL)
  {
    node *front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
  }
  return prev;
}

node* usingrecursion(node * head)
{
  if(head==NULL|head->next==NULL)
  {
    return head;
  } 
  node * newhead=usingrecursion(head->next);
  node* front = head->next;
  front->next=head;
  head->next=NULL;
  return newhead;
}

int main()
{
  vector<int> arr = {1, 4, 2, 4, 10, 8, 9};

  node *head = converttoarr(arr);

  // head = reversell(head);
  head = reverselloptimized(head);
 
  print(head);
 
  return 0;
}