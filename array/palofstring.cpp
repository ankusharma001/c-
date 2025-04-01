
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char rev[str.size()];
    int b = 0;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        rev[b] = str[i];
        b++;
    }
    b = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (rev[i] == str[i])
        {
            cout << b++;
        }
    }
    if (b == str.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// int main()
// {
//     Node* firstNode = new Node();
//     Node* secondNode = new Node();
//     Node* thirdNode = new Node();

//     firstNode->data = 1;
//     firstNode->next = secondNode;

//     secondNode->data = 2;
//     secondNode->next = thirdNode;

//     thirdNode->data = 3;
//     thirdNode->next = NULL;
//     return 0;
// }