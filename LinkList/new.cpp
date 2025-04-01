// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node 
{
    public :
    int data ;
     node * next ;
     
     node (int data, node * next)
     {
         this -> data=data;
         this -> next = next;
     }
     node (int data)
     {
         this -> data= data;
         next = nullptr;
     }
};

node * convert(int arr[] )
{
  node * head= new node (arr[0]);
  node * mover = head ;
  for (int i = 1; i < 5; i++)
  {
    node * temp = new node (arr[i]);
    mover -> next = temp ;
    mover = temp ;
    /* code */
  }
  return head;
  
}

int main() {
  int arr[5]={1,2,3,4,5};

  node * head= convert(arr);
   
   while (head!=NULL)
   {
       cout<<head-> data<< " ";
       head= head -> next ;
       
   }

    return 0;
}