#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 


void pattern (vector<int>&arr)
{
  int sum =0;
  int maxsum = 0;
  int k =3;

  for (int i = 0; i < k; i++)
  {
    sum+=arr[i];

  }
  maxsum =sum;
  int i =0;
  int j= k ;
  
  
  while (j<arr.size())
  {
    sum-=arr[i];
    sum +=arr[j];
    i++;
    j++; 
  }
  maxsum = max(maxsum , sum );
  cout<<maxsum;  
 
}
 
int main()
{
  vector<int> arr={1,2,3,2,0};

  pattern(arr);
 
  return 0;
}