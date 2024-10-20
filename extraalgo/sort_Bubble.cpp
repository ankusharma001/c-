//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Time complixity  =====>>>>> o(n2)-> worst  o(n)->best 
void bubble_sort(int arr [],int a)
{
   for (int i = a-1; i >=0; i--)
    {
      int didswap =0; // for optimisation if array in sorted 
      for (int j= 0; j <=i-1; j++)
      {
        if(arr[j]>arr[j+1])
        {
          int temp = arr[j+1];
          arr[j+1]=arr[j];
          arr[j]=temp;
          didswap =1;
        }

      }

      if(didswap ==0 )
      {
        break;
      }
    }
}


int main()
{
    int arr[10]={4,8,6,2,1,7,3,8,4,6};
    int a = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,a);

    for (int  i = 0; i < a; i++)
    {
      cout<<arr[i]<<" ";
    }
    

   
    


return 0;
}