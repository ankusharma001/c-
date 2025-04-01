#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
 
class node  {
    
    public:

    int data;
    node* next;
    
    node(int data1 ,node* next1)
    {
        data =data1;
        next = next1;
    }
    node(int data1)
    {
        data =data1;
        next =nullptr;
    }
    /* data */
 };
 
void print(node* head ){


    while (head!=NULL)
    {
        cout<<head->data<<"-> ";
        head = head->next;
    }
cout<<"{NULL//END}"<<endl;
    
 }
 
node* converttoarr(vector<int> arr)
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
 
 node* rev(node* head)
 {
  node* temp = head;
  node* prev=NULL;
  while (temp!=NULL)
  {
    node* front=temp->next;
    temp->next=prev;
    prev=temp;
    temp=front;

  }
  return prev;
  
 }

node* addll(node* head )
{ 
  
  node* temp = head;
  int carry =1;

  while (temp!=NULL)
  {
    if(carry==0)
    {
      break;

    }
    carry=(temp->data+1)/10;
    temp->data=(temp->data+1)%10;
    temp=temp->next;
  }
  if(carry!=0)
  {
    node * dhead=new node(carry);
    dhead->next=head;
    return dhead;
  }
  return head;
  

}
 
int helper(node *temp)
{
  if(temp==NULL)
  {
    return 1;
  }
  int carry = helper(temp->next);
  temp->data +=carry;
  if(temp->data<10)
  {
    return 0;
  }
  temp->data=0;
  return 1;


}

node* recursion(node* head )
{
  int carry = helper(head);
  if(carry ==1)
  {
    node * newnode= new node (1);
    newnode->next=head;
  head =newnode;
  }
  return head;

}



int main()
{
  vector <int> arr={9,8,9};

  node* head = converttoarr(arr);

  // head= rev(head);
  // head=addll(head);

  head= recursion(head);

  node * temp = head ;

  node * dum =NULL;
  node * dum1 =NULL;

  for(int i =1;i<arr.size();i++)
  {
    temp = temp -> next;
    dum =temp ->next;

  } 
  dum1=dum;
  while(dum1->next!=NULL)
  {
    dum1=dum1->next;

  }
  dum1->next=head;


  
  
  print(head);

   
 
  return 0;
}