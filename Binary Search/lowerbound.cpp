#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &nums, int target)
{
  int n = nums.size(); 
  int low = 0;
  int high = n - 1;
  int ans = n ;

 
  while (low <= high)
  {
  int mid = (low + high) /2;
  if(nums[mid] >=target){
    ans  = mid;
    high = mid- 1;

  } 
  else 
  {
    low = mid +1;

  }
  }
  return  ans;
}

int main()
{
  vector<int> arr = {1,2,4,6,8,10,12,15,216,444};

  // cout << binarySearch(arr, 11);
auto lb = lower_bound(arr.begin(),arr.end(),1);
 int index = lb - arr.begin();
 cout<< index;
  

  return 0;
}