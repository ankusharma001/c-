//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
 
using namespace std;

void reverse(int arr[],int a,int b)
{
  if(a>=b)
  {
    return ;
  }
  swap(arr[a],arr[b-1]);
  reverse (arr,a+1,b-1);

}
 
int main()
{
  int arr[5]={1,2,3,4,5};

  int size= sizeof(arr)/sizeof(arr[0]);

  int temp=0;

  reverse(arr,0,5);

  // using for loop
  // for (int i = 0; i < 5/2; i++)
  // {
  //   if(i>=size/2)
  //   {
  //     break;
  //   }
  //   else{
  //     temp =arr[i];
  //     arr[i]=arr[size-i-1];
  //     arr[size-i-1]=temp;
  //   }
  // }
  

  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
  
  
  return 0;
}