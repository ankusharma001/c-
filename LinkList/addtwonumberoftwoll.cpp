#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    /* data */
};

void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "-> ";
        head = head->next;
    }
    cout << "{NULL//END}" << endl;
}

node *converttoarr(vector<int> arr)
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

node *addll(node *head, node *head1, node *dummynode)
{
    node *temp = head;
    node *temp1 = head1;
    node *dtemp = dummynode;
    int carry=0;

    while (temp!=NULL&&temp1!=NULL)
    {
        int  sum=carry;
        if(temp)
        {
            sum+=temp->data;

        }   
        if(temp1)
        {
            sum+=temp1->data;
        }             
        node* newnode= new node(sum%10);
        carry=sum/10;
        dtemp->next=newnode;
        dtemp=dtemp->next;
        if(temp)
        {
            temp=temp->next;
        }
        if(temp1)
        {
            temp1=temp1->next;
        }
    }
    if(carry)
    {
        node* newnode = new node (carry);
        dtemp->next=newnode;
    }
    return dummynode->next;
}

int main()
{
    vector<int> arr = {9,9,9};
    vector<int> arr1 = {9,9,9};

    node *head = converttoarr(arr);
    node *head1 = converttoarr(arr1);
    node *dummynode = new node(-1);

    dummynode = addll(head,head1,dummynode);

    // cout<<42%10;


    // //  print(head);
     print(dummynode);

    return 0;
}