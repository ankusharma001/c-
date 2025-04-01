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

node*  oddeven(node* head )
{
  vector<int> arr;
  node* temp = head;

  while (temp!=NULL&&temp->next!=NULL)
  {
    arr.push_back(temp->data);
    temp =temp->next->next;

 }
 if(temp)
 {
  arr.push_back(temp->data);
 }

 temp = head ->next;

  while (temp!=NULL&&temp->next!=NULL)
  {
    arr.push_back(temp->data);
    temp =temp->next->next;

 }
 if(temp)
 {
  arr.push_back(temp->data);
 }
 int i=0;
 temp=head;
 
 while (temp!=NULL)
 {
  temp->data=arr[i];
  i++;
  temp=temp->next;
 }
 return head;
 

}

node*  optimizeoddeven(node* head )
{
  node* odd= head ;
  node* even =head->next;
  node* evenh =head->next;


  while(even!=NULL&&even->next!=NULL)

  {
    odd->next=odd->next->next;
    even->next=even->next->next;
    odd=odd->next;
    
    even=even->next;

  }
  odd->next=evenh;
  return head;


}
int main()
{
  vector<int> arr={1,4,3,6,5};

  node*  head = converttoarr(arr);

  // head = oddeven(head);

  head = optimizeoddeven(head);
  print(head);
  return 0;
}