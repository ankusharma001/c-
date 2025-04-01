#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin>>a;
    int arr[a][a];
    for (int  i = 0; i < a; i++)
    {
        /* code */
        for (int  j = 0; j <a; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
     for (int  i = 0; i < a; i++)
    {
        /* code */
        for (int  j = a-1; j >=0; j--)
        {
            /* code */
            cout<<arr[j][i];
        }cout<<endl;
        
    }
    
return 0;
}