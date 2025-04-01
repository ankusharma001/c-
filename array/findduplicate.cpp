#include <iostream>
using namespace std;

int duplicate(int a, int arr[])
{
    for(int i=0;i<a;i++)
    {
        cout<<arr[i];
    }
    // return 0;
    

}
int main()
{ 
    int a;
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
   cout<< duplicate(a,arr);
   
return 0;
}