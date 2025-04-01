#include <bits/stdc++.h>
 
using namespace std;
 

void mergsortt(vector<int> &arr ,int low , int high  ,int mid)
{
  vector <int> arr1;
 int left= low ;
 int  right = mid+1;
 while (left<=mid && right<=high)
 {
  if(arr[left]<=arr[right])
  {
    arr1.push_back(arr[left]);
    left++;
  }
  else 
  {
    arr1.push_back(arr[right]);
    right++;
  }
 }
 while (left<=mid)
 {
  arr1.push_back(arr[left]);
  left++;
  /* code */
 }
  while (right<=high)
 {
  arr1.push_back(arr[right]);
  right++;
  /* code */
 }

 for (int  i = low; i <= high; i++)
 {
  arr[i]=arr1[i-low];
  /* code */
 }
 
 
 

}

void mergsort (vector<int> &arr ,int low , int high )
{

  if(low>=high)
  {
    return ;
  }
  int mid = (low + high )/2;

  mergsort(arr,low, mid);
  mergsort(arr,mid+1,high);     

  mergsortt(arr,low,high,mid);     


}

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
 
int main()
{
  vector<int> arr={1,45,41,54,1,12,12,12};
  
  mergsort(arr,0,arr.size()-1);

 cout<< binarySearch(arr,12);

  
   
  return 0;
}