#include <iostream>
 #include <vector>
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

node * build ()
{
    int data ;
    cin>>data;
    
    node * head  = NULL;
    node * tail =NULL ;
    
    while(data!=-1)
    {
        node* cur = new node(data);
        
        if(head ==NULL)
        {
            head = cur;
            tail =cur;
        }
        else 
        {
            tail -> next = cur;
              tail=cur;
        }
        cin>>data;
        
    }
    return head ;
}

 
node* deletehead(node* head )
 {
    if(head== NULL)
    {
        return head;

    }
    node* temp=head ;
    head=head-> next ;
    
    delete temp;
    return head;

 }
 
node* deleteheadtail(node* head )
 {
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* temp =head ;
    while (temp->next->next!=NULL)
    {
        temp= temp -> next ;
        
    }
    delete(temp->next);
    temp->next=nullptr;

    return head;
    
 }

node* kthelementposition(node* head ,int k)
{
    if(head ==NULL)
    {
        return head;
    }
    if(k==1)
    {
        node* temp=head ;
        head=head->next;

        free(temp);
        return head ;   
     }
     int count =0;
     node* temp = head ;

     node* prev=NULL;

     while (temp!=NULL)
     {
        count++;
        if(count==k)
        {
            prev -> next=prev->next->next;
            free (temp);
            break;
            

        }
        prev=temp;

        temp=temp->next;
     }
     
return head ;

}
 
node* existingele(node* head , int k)
{
    if(head ==NULL)
    {
        return head ;
    }
    if(head -> data == k)
    {
        node* temp = head ;
        head = head -> next;

        free(temp);
        return head ;
    }

    node * temp = head ;
    node*  prev = nullptr;

    while (head!=NULL)
    {
        if(temp->data ==k)

        {
            prev->next= prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head ;
    
}

node* insertioninhead(node* head ,int ele )
{
    node* temp = new node(ele,head);
    return temp ;
}

node* insertionintail(node* head ,int ele )
{
    

    if(head ==NULL)
    {
        node* temp = new node(ele);
        return temp;
    }

    
node* temp =head;
   while(temp->next!=NULL)
   {
    temp =temp->next;
   }
   node* newnode=new node (ele);

   temp -> next = newnode;
   return head ;

}

node* inserttionatkthposition(node* head , int ele ,int k )
{
    if(head ==NULL)
    {
        if(k==1)
        {
        return new node(ele);
        }
        else{
            return head;
        }
    }

    if(k==1)
    {
        node* temp = new node(ele , head );
        return temp ;
    }

    node* temp =head ;
    int count=0;

    while(temp!=NULL)
    {
        count ++;
        if(count == k-1)
        {
            node* x = new node (ele);
            x->next =temp->next;
            temp->next=x;
            return head ;

        }
        temp = temp->next;

    }
    return head ;

}

node* insertbeforek(node* head , int ele ,int k )
{
    if(head ==NULL)
    {
        return NULL;
    }

    if(head ->data==k)
    {
        return new node(ele,head);
    }

    node* temp =head;
    while(temp->next != NULL )
    {
        if(temp ->next->data==k)
        {
            node* x=new node (ele, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;

    }
    return head ;
}

int main()
{
    vector <int> arr ={12,5,4,12,45,78};
    node* head = converttoarr(arr);

    //for deleting the element  
    head= kthelementposition(head,4);
    head = deletehead(head);
    head = deleteheadtail(head);
    head = existingele(head , 5);

    //for inserting the element 
    head = insertioninhead(head , 100);
    head = insertionintail(head , 100);
    head = inserttionatkthposition(head , 100,2);
    head = insertbeforek(head , 999,4);


   
    print(head);


    // node*  head ;  
    // head =deletehead(head);
    // cout<<head;
    
return 0;
}