//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
void  pattern (int sum,int a)
{
  if(a==1)
  {
   cout<< sum ;
   return ;
  }
  sum *=a;
  a=a-1;

  pattern(sum,a);

}
int main()
{
  //int arr[]={};
 
  //int count = sizeof(arr)/sizeof(arr[0]); 
  
 
 pattern (0,4);
 
  return 0;
}