#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// using arr

class array1
{
  int capacity;
  int *arr;
  int top;

public:
  array1(int a)
  {
    capacity = a;
    arr = new int[a];
    top = -1;
  }
  void push(int data)
  {
    if (top == capacity -1 )
    {
      cout << " overflow";
      return ;
    }
    top++;
    arr[top] = data;
  }

 int   pop()
  {
    if (top == -1)
    {
      cout << " unerflow";
      return INT_MIN;
    }
    top--;
  }

  int gttop()
  {
    if (top == -1)
    {
      cout << "unerflow";
      return INT_MIN;
    }
    return arr[top];
  }

  int size()
  {
    return top + 1;
  }

  bool isfull()
  {
    return top = capacity - 1;
  }
};

//linlist 
class lnk{
  public:
  int data ;
  lnk* next ;
  
  
  lnk(int data)
  {
    this->data=data;
    next =NULL;
  }
};

class stack {

  lnk * head;
  public:
  stack(int a){
    head=NULL;
  }
  bool isempty()
  {
    return head==NULL;
  }

  void push(int data)
  {
    lnk * newnode = new lnk(data);
    newnode ->next= head;
    head = newnode;
  }
  void pop()
  {
    if(head ==NULL)
    {
      cout<<"underflo";
      // return INT_MIN;
    }
    lnk * newhead = head ->next;
    head ->next = NULL;
    delete(head);
    head = newhead;
    // return newhead;
  }
  int top()
  {
    if(head ==NULL)
    {
      cout<<"underflo";
      // return INT_MIN;
    }
    return head -> data;


  }

};
 

int main()
{
  /*array1 st(4);


  st.push(45);
  st.push(89);
  st.push(45);
  // cout<<st.gttop();
  st.push(7878);
  // st.push(47879);
  cout<<st.gttop();
  st.pop();
  cout<<st.gttop();*/
 
  
  // stack stac(45);
  // stac.isempty();
  // stac.top();
  


  return 0;
}