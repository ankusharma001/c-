//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

void  reverse(int arr[],int a,int b)
{
  if(a>=b)
  {
    return ;
  }
  swap(arr[a],arr[b-1]);
  reverse(arr,a+1,b-1);
}
 
int main()
{
  int arr[]={4,5,1,35,2};

  reverse(arr,0,5);

  for (int  i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
    /* code */
  }
  


  
  return 0;
}