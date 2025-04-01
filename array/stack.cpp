#include <iostream>
#include <stack>
using namespace std;

// class stak
// {
//     public:

//     int *arr;
//     int top;
//     int size;

//     stak (int size )
//     {
//         this -> size=size;
//         arr
//     } 
    


// };

int main()
{
    int a;
    cout<<"enter the vlaue ";
    cin>>a;

    int arr[a];
    stack <int > b;

    cout<<" enter the value ";

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        b.push(arr[i]);
    }

    for(int i=0;i<a;i++) {

    cout<<b.top()<<endl;
    b.pop();
    }
    
     for(int i=0;i<a;i++) {

    cout<<arr[i]<<endl;
    
    }

//     stack <int > a;

//     a.push (2);
//     a.push(3);

//     a.pop();
//     a.pop();

// //     cout<<"printing top element "<<a.top()
// // <<endl;
// if(a.empty())
// {
//     cout<<"stack is empty"<<endl;

// }
// else 
// {
//     cout<<"stack is not empty"<<endl;
// }


return 0;
}