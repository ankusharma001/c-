#include <iostream>
 
using namespace std;
 
 class node {
  public:
  int data;
  node*  next;\
  //  node(int data1)
  //   {
  //       data =data1;
  //       next =nullptr;
  //   }

 };


void print(node *n)
 {
  while (n!=NULL)
  {
    cout<<n->data<<endl;   
    n=n->next;
  }  
  cout<<"NO more data"<<endl;
 }

//  void push (node *n ,int newdata)
//  {
//   node* newdata=new node();
  
//   n->next=

//  }



int main()
{

  // node* head = new node();
  // node* second = new node();
  // node* third = new node();

  // head -> data=4;
  // head -> next = second;

  // second -> data=565;
  // second -> next = third;

  // third->data =6546;
  // third->next=NULL;

  // print(head);



  node* head =NULL;

  // push (head,45);
  // push (head,45);


  
    
return 0;
}