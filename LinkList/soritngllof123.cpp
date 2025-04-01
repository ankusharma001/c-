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

node* sorton123(node* head )
{
  int count0=0;
  int count1=0;
  int count2=0;
  node* temp =head;
  while (temp!=NULL)
  {
    
    if(temp->data==0)
    {
      count0++;
    }
    else if(temp->data==1)
    {
      count1++;
    }
    else if(temp->data==2){
      count2++;
    }
    else{
      cout<<"there is anothere number than 1,2and 3";
      break;
      return 0;
    }
    temp=temp->next;
  }
  temp=head;
  while (temp!=NULL)
  {
    if(count0)
    {
      temp->data=0;
      count0--;
    }
    else if(count1)
    {
      temp->data=1;
      count1--;
    }
    else{
      temp->data=2;
      count2--;
    }
    temp=temp->next;

  }
  return head;
  
  
}

node* optimizesorton123(node* head )
{
  node* temp =head ;

  node* for0= new node (-1);
  node* for1= new node (-1);
  node* for2= new node (-1);

  node* tempfor0=for0;
  node* tempfor1=for1;
  node* tempfor2=for2;

  while (temp!=NULL)
  {
    if(temp->data==0)
    {
      tempfor0->next=temp;
      tempfor0=temp;      
    }else if(temp->data==1)
    {
      tempfor1->next=temp;
      tempfor1=temp;      
    }else if(temp->data==2)
    {
      tempfor2->next=temp;
      tempfor2=temp;      
    }
  temp = temp->next;
    
  }
  tempfor0->next=(for1->next)?for1->next:for2->next;
  tempfor1->next=for2->next;
  tempfor2->next=nullptr;
  return for0->next;
  
}

int main()
{
  vector<int> arr={1,0,2,1,0,2,0,1};

  node*  head = converttoarr(arr);

  // head = sorton123(head);

  head = optimizesorton123(head);

  print(head);
  return 0;
}