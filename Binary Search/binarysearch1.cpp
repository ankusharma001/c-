#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
bool pattern (vector <int> arr, int low ,int high , int target )

{

  if( low<= high)
  {
    return false;
  }

  int mid = (low + high) /2;
  if( arr[mid] ==target)
  {
    return true;
  }
  else if ( arr[ mid]< target)
  {
   return pattern(arr, mid+1,high, target );
  }
  else 
  {
     return pattern(arr,low , high -1 ,target);
  }
}
 
int main()
{
  vector<int> arr ={1,2,3,4,5,6};
  bool ispresent = false;

  int low = 0;
   int high = arr.size();
   while ( low <= high)
   {
    int mid = (low + (high- low ) /2);

    if( arr[mid ] == 7)
    {
      ispresent = true;
      break;
    }
    else if ( arr[mid] < 7)
    {
      low = mid+1;

    }
    else 
    {
      high = mid -1;
    }
   }

   if (ispresent)
   {
    cout<< "present ";

   }
   else 
   {
    cout << " not present";
   }

   if ( pattern(arr,0, arr.size()-1,5))
   {
    cout << " present";
   }
   else 
   {
    cout<< " not present";
   }

 
  return 0;
}