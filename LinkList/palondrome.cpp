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

int pal(node *head)
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
    if (val.top() != temp->data)
    {
      return false;
      break;
    }
    val.pop();
    temp = temp->next;
  }
  return true;
}

node *rev(node *head)
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

int optimizepal(node *head)
{
  node *slow = head;
  node *fast = head;

  while (fast->next != NULL && fast->next->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  node *newhead = rev(slow->next);
  node *first = head;
  node *second = newhead;

  while(second!=NULL)
  {
    if(first->data!=second->data)
    {
      rev(newhead);
      return false;
    }
    first= first->next;
    second=second->next;
  }
  return true;
}

int main()
{
  vector<int> arr = {1, 2, 3, 1};

  node *head = converttoarr(arr);

  if (pal(head))
  {
    cout << "pal";
  }
  else
  {
    cout << "not pal";
  }

  return 0;
}