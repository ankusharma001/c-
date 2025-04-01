#include <bits/stdc++.h>
 
using namespace std;
 
/* 
fifo => firt in first out 
fcfs => first come first serve
queeue is a linear data structure 
types of operations 
1) enqueue
2) dequeue
3) front
4) size
5) is full
6) is empty

types of queue
1) simple 
2) priority 
3) circular queue
4) double ended queue
*/
class node 
{
  public :
  int data;
  node * next ;

  node (int data  )
  {
    this -> data = data;
    this -> next = NULL ;
  }

};

class Queuee
{
  node * head =NULL;
  node * tail= NULL;
  int size;

public:
  Queuee()
  {
    this->head = NULL;
    this->tail = NULL;
    size=0;
  }
void   enqueuee(int data)
  {
    node * Newnode = new node (data);
    if(this -> head==NULL)
    {
      this-> head =this->  tail = Newnode;
    }
    else 
    {
     this-> tail -> next = Newnode;
      this ->tail = Newnode;
    }
    size++;
  }

void dequeuee()
{
  if(this->head = NULL)
  {
    return ;
  }
  else 
  {

    node * otemp = this->head ;
    node * temp = this->head -> next ;
    this->head= temp;

    if(this-> head ==NULL)
    {
      this->tail=NULL;
    }
    otemp->next= NULL;
    delete (otemp);  
    size--;
   }

}

int getsize()
{
  return this->size;
}

bool isempty()
{
  return this->head =NULL;
}

int front()
{
  if(this->head =NULL)
  {
    return -1;
  }
  return this-> head -> data;
}

};




 
int main()
{
  Queuee qu;

  qu.enqueuee(45);
  qu.enqueuee(47);
  // qu.front();
  while (not qu.isempty())
  {
    cout<<qu.front()<<" ";
    qu.dequeuee();
  } 
 
  return 0;
}