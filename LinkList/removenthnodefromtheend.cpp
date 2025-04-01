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

node *removeNthnode(node *head, int n)
{
    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    int res = count - n;
    while (temp != NULL)
    {
        res--;
        if (res == 0)
        {
            break;
            temp = temp->next;
        }
    }
    node  *dele = temp->next;
    delete (dele);
    temp->next = temp->next->next;
    return head;
}


//linklist having n node find the midde=le element of the linklist

void middle(node* head )
{
    int count =0;
    node * temp = head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    int mid=0;
    temp=head;
    for(int i=0;i<=count/2;i++)
    {
       mid=temp->data;
       temp=temp->next;
    }
    cout<< mid;   

}

int main()
{
    vector<int> arr = {1,5,7,10,12};

    node *head = converttoarr(arr);
    // head = removeNthnode(head, 2);

    middle(head);

    // print(head);
    return 0;
}