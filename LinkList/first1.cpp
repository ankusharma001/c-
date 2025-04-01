#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

// for printing the list
void printList(node *n)
{
  while (n != NULL)
  {
    cout << n->data<< " ";
    n = n->next;
  }
  // cout << " no data";
}

// node *pushele(node * head , int newdata)
// {
//   node* newnode =new node();
//   newnode ->data=newdata;
//   newnode->next=head;
//   head = newnode;
//   return head;
// }

// In front of list
void pushEle(node **head_ref, int newdata)
{
  node *newnode = new node();
  newnode->data = newdata;
  newnode->next = *head_ref;
  *head_ref = newnode;
}
// In middel of list
void insert(node *previ_Node, int newdata)
{
  node *newnode = new node();
  newnode->data = newdata;
  newnode->next = previ_Node->next;
  previ_Node->next = newnode;
}

// In  the  ENd
void insertEnd(node **head_Ref, int newdata)
{
  node *newnode = new node();
  newnode->data = newdata;
  newnode->next = NULL;

  node *last = *head_Ref;

  if (*head_Ref == NULL)
  {
    *head_Ref = newnode;
    return;
  }

  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = newnode;
  return;
}

void print_List(node*  head )
{
  if(head ==NULL)
  {
    return ;
  }
  cout<<head->data << " ";
  print_List(head -> next);
}

int main()
{



  node* head = new node();
  node* second = new node();
  node* third = new node();

  head->data=12;
  head->next=second;

   second->data=88;
  second->next=third;

  third->data=45;
  third->next=NULL;

  node *head = NULL;











  

  // head=pushele(head,5);
  // head=pushele(head,7);
  
  // 
  int a;
for(int i=1;i<=7;i++)
{
  cin>>a;
  pushEle(&head, a);
}

  
  // pushEle(&head, 7);

  // insert(head->next, 45);

  // pushEle(&head, 8);

  // insertEnd(&head, 78);
  printList(head);
  return 0;
}