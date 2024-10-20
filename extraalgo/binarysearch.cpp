#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int pattern (vector<int> & arr , int key)
{
  int low =0;
  int high = arr.size()-1;
  while (low<high)
  {
    int mid = (low +high )/2;
    if(arr[mid]==key)
    {
      return  mid;

    }
    else if(key < arr[mid])
    {
      low -mid +1;


    }
    else 
    {
      high = mid-1;

    }
    return -1;

  }
  
 
}
 
int main()
{
vector<int> arr={1,2,3,4,5,6};

  cout<<pattern (arr,4);
 
  return 0;
}