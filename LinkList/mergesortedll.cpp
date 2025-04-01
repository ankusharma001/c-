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

node *merge(node *head1, node *head2)
{
  node* head3=new node(-1);

  node *temp1 = head1;
  node *temp2 = head2;
  node* temp3= head3;

  while (temp1 != NULL && temp2 != NULL)
  {
    if (temp1->data < temp2->data)
    {
      temp3->next=temp1;
      temp1 = temp1->next;
      // temp3=temp3->next;
    }
    else
    {
      temp3->next=temp2;
      temp2 = temp2->next;
      
    }
    temp3=temp3->next;

  }
  while (temp1!=NULL)
  {
    temp3->next=temp1;
      temp1 = temp1->next;
      temp3=temp3->next;
    
  }
    while (temp2!=NULL)
  {
    temp3->next=temp2;
      temp2 = temp2->next;
      temp3=temp3->next;
    
  }
  
  return head3->next;
}

int main()
{
  vector<int> arr = {1, 2, 4};
  vector<int> arr1 = {1, 3, 4};

  node *head1 = converttoarr(arr);
  node *head2 = converttoarr(arr1);


 node * head = merge(head1, head2);

  print(head);

  return 0;
}