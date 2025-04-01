#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &nums, int target)
{
  int n = nums.size(); // size of the array
  int low = 0, high = n - 1;

  // Perform the steps:
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (nums[mid] == target)
      return mid;
    else if (target > nums[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int main()
{
  vector<int> arr = {1,2,6,4,8,11,12,15,216,444};

  cout << binarySearch(arr, 12);

  return 0;
}