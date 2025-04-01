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

node* deletehead(node* head)
{
  if(head==NULL||head->next==NULL)
  {
    return NULL;
  }
  node * prev=head;

  head = head->next;

  head->back=nullptr;
  prev->next=nullptr;

  delete(prev);
  return head;

}

node* deletetail(node * head)
{
  if(head==NULL||head->next==NULL)
  {
    return NULL;
  }
  node* prev=head;
  while(prev->next!=NULL)
  {
    prev =prev->next;  
  }
  node* newlast=prev->back;
  newlast->next=nullptr;
  // prev->back=nullptr;//u may or may not write this staemnt 
  delete(prev);
  return head;
}

node* deletekthele(node* head ,int k)
{
 if(head==NULL)
  {
    return NULL;
  }
  int count =0;
  node* temp = head ;
   while (temp!=NULL)
   {
    count ++;
    if(count==k)
    {
      break;
    }
    temp=temp->next;
   }
   node* prev = temp->back;
   node* front = temp -> next;
 
if(prev==NULL&&front == NULL)
  {
    delete (head);
    return NULL;
  }
  else if(prev == NULL)
  {
    return deletehead (head);
    } 
    else if(front == NULL)
  {
    return deletetail(head);
    }
  prev ->next = front;
  front->back = prev;

  temp ->next =nullptr;
  temp->back=nullptr;

  delete(temp);
  return head ;

   
}

/*node* deletegivenele(node* head , int ele)
{

  
  if(head==NULL)
  {
    return NULL;
  }
 
  node* temp = head ;

   while (temp!=NULL)
   {
   
    if(temp->next==ele)
    {
      break;
    }
    temp=temp->next;
   }
   node* prev = temp->back;
   node* front = temp -> next;
 
if(prev==NULL&&front == NULL)
  {
    delete (head);
    return NULL;
  }
  else if(prev == NULL)
  {
    return deletehead (head);
    } 
    else if(front == NULL)
  {
    return deletetail(head);
    }
  prev ->next = front;
  front->back = prev;

  temp ->next =nullptr;
  temp->back=nullptr;

  delete(temp);
  return head ;
}
*/

void deletnode (node* head )
{
  node* prev =head ->back ;
  node* front = head ->next ;

  if(front ==NULL)
  {
    prev->next =nullptr;
    front->back=nullptr;
    return;
  }
  prev->next =front;
  front->back = prev;

  head ->next = head ->back =nullptr;
  delete(head);

}

node* insertbefore(node* head ,int ele )
{
  if(head ==NULL)
  {
    node * newhead = new node (ele,nullptr,nullptr);
  }

  node* newhead = new node (ele,head,nullptr);

  head->back = newhead;


  return newhead;

}

node* insertbeforetail(node* head ,int val)
{
  if(head->next ==NULL)
  {
   return insertbefore(head,val);
  }
  node* tail = head ;
  while (tail->next!=NULL)
  {
  tail=tail->next;
  }
  node * prev = tail ->back ;
  node* newnode = new node(val, tail, prev);
  prev->next= newnode;
  tail->back=newnode;
  return head;  

}

node* insertbeforekthpositoin(node* head ,int ele,int k)
{
  if(head->next ==NULL)
  {
    return insertbefore(head, ele);
  }
  if(k==1)
  {
    return insertbefore(head,k);
  }
  node* temp =head;

  int count =0;



  while (temp->next !=NULL)
  {
    count++;
    if(count==k)
    {
      break;
    }
    temp =temp ->next;
  }
  node* prev = temp ->back;
  // node* front = temp ->next;

  node * newhead = new node (ele,temp,prev);

  prev->next= newhead;
  temp->back=newhead;

  return newhead ;


}

void insertbeforenode(node* head,int val)
{
  node* prev =head->next;
  node* newnode= new node(val,head,prev);

  prev->next=newnode;
  head->back=newnode;


}

int main()
{

  vector<int> arr={45,8,7,4,5,2};
  
  node* head =converttoarr(arr);

  // deletnode(head->next);
  // head = deletekthele(head , 3);
  // head = deletehead(head);
  // head = deletetail(head);

  // insertbeforenode(head->next,454);    
  head = insertbeforekthpositoin(head,4895,2);
  head = insertbefore(head,45);
  head = insertbeforetail(head,488);


  print(head);

    
 
  return 0;
}