#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
class node {

  public:
  int data ;
  node* next;
  node* back;

  node (int data1):data(data1) ,next(nullptr),back(nullptr){}

  node (int data1,node* next1,node * back1):data(data1),next(next1),back(back1){}

};
 
node* converttoarr(vector<int> & arr)
{
  node* head = new node (arr[0]);
  node * prev = head ;
  for(int i =1;i<arr.size();i++)
  {
    node * temp = new node (arr[i],nullptr,prev);
    prev->next=temp;
    prev=temp;

  }
  return head;

}

void print(node * head )
{
  while(head!=NULL)
  {
    cout<<head->data<<"->";
    head=head->next;
  }
  cout<<"NULL";
 
}
 
node* reverseddl(node * head )
{

  //time comokixity O(2n)
  //space complixity O(n)

  // stack <int> s;

  // node * temp = head;
  // while(temp!=NULL)
  // {
  //   s.push(temp->data);
  //   temp=temp->next;
  // }

  // temp = head;
  // while(temp!=NULL)
  // {
  //   temp->data=s.top();
  //   temp=temp->next;
  //   s.pop();
  // }

  //optammized reverse the links
  //time = o(N)
  //space =O(1)

  if(head==NULL||head->next==NULL)
  {
    return head;
  }
  node* prev = NULL;
  node * temp = head;

  while (temp!=NULL)
  {
    prev=temp->back;
    temp->back=temp->next;
    temp->next=prev;

    // swap(temp->next,temp->back);
    temp=temp->back;
    
  }
  return prev->back;
  


  
}

int main()
{

  vector<int> arr={1,2,3,4,5};

  node * head = converttoarr(arr);

  head = reverseddl(head);

  print(head);


 
  return 0;
}