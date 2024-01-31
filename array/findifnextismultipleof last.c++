
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int b=1;
    for(int i=0;i<a;i++)
    {
        if(arr[i]/arr[0]==b)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
        b++;
    }

    return 0;
}
