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
 
 
int main()
{
  vector<int> arr={1,2,3};

   
  return 0;
}