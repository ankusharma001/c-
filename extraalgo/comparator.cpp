#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
static bool cmp (int &a , int &b )
{
 return a > b;
}
// static bool cmp (pair<int,int> &a , pair <int,int> &b )
// {
//   return a.second > b.second;
// }


 
int main()
{
  //int arr[]={};
 
  //int count = sizeof(arr)/sizeof(arr[0]);

  vector <int> arr = {1,2,3,4,78,9,7};

  sort(arr.begin(),arr.end(), cmp);

  for (auto i : arr)
  {
    cout<< i<< " ";
  }
  
  
 
  return 0;
}