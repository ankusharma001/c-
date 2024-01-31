
#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;cin>>b;
    int arr[a][b];
    
    for(int i=0;i<=a;i++)
    {
        for(int j=0;i<=b;i++){
        cin>>arr[i][j];
        }

    }
    for(int i=0;i<=a;i++)
    {
        for(int j=0;i<=b;i++){
        cout<<arr[i][j];
        }

    }


    
    return 0;
}