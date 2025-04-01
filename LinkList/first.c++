#include <iostream>
#include <vector>
using namespace std;
// class for insert the head and theh next value in linklist
class node
{
public:
    int data;
    node *next;

    // node(int data ,node* next)
    // {
    //     this->data =data;
    //     this->next = next;
    // }

    node(int data1):data(data1),next(nullptr){}
    /* data */
};

// convert array to linklist
node *convertarr2ll(vector<int> arr)
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

// lenght of the linklist
int lenghtoflinklist(node *head)
{
    int lcount = 0;
    node *temp = head;
    while (temp)
    {
        temp = temp->next;

        lcount++;
    }
    return lcount;
}

// travers linklist
node *printlist(node *head, vector<int> arr)
{
    if (head == NULL)
    {
        cout << " list is empty " << endl;
    }

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

// search in linklist
int search(node *head, int a)
{

    node *temp = head;

    while (temp)
    {
        if (temp->data == a)
        {
            return 1;
        }
        // cout << temp->data << " -> ";
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {2, 4, 5, 65, 5, 6};
    node *head = convertarr2ll(arr);

    node *temp = head;

//print linklist
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << search(head, 789) << endl;

    /*here we are defining the the class node pointere and allocating the values in then by
    dynamically here first value is the value to the data like what is about data about and the second value is about the address of the next data */

    // node* had = new node(455,nullptr);
    // node* ead = new node(5,had);
    // node* head = new node(45,ead);

    // cout << head->data<<endl;
    // cout << head->next<<endl;
    // cout<<ead<<endl;

    // cout << ead->data;
    // cout << had->data;

    return 0;
}