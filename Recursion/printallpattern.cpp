#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

//find the subsequnce of the k sum 
 
void pattern (int idn ,vector <int> &ds,int s, int sum ,int arr[] ,int n)
{

  if(idn==n)
  {
    if(s==sum)
    {
      for(auto it:ds)
      {
        cout<<it<<" ";
      }
      cout<<endl;
      
    }return ;
  }
  ds.push_back(arr[idn]);
  s+=arr[idn];
  pattern(idn+1,ds,s,sum,arr,n);

  s-=arr[idn];

  ds.pop_back();
  pattern(idn+1,ds,s,sum,arr,n);
 
}
 
int main()
{
  int arr[]={1,2,1};
 
  int count = sizeof(arr)/sizeof(arr[0]);

  int sum =2;
  vector <int> ds;

  pattern (0,ds,0,sum,arr,count);
 
  return 0;
}