#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
int minimumOperations(vector<int>& nums) {
  unordered_map <int ,int> mp;
  int size = nums.size();
  int count = 0;
  for (int i=0;i<size ;i++)
  {
      mp[nums[i]]++;
      if(mp[nums[i]]>1)
      {

           if (nums.size() <= 3) {
          nums.clear();
      } else {
          nums.erase(nums.begin(),nums.begin()+3);
          mp[nums[i]]--;
          i=0;
          size= nums.size();
         
         
      }
       count ++;
      }

  }
  return count ;

}
 
int main()
{
  vector <int> arr ={1,2,3,4,2,3,3,5,7};


  cout << minimumOperations(arr);
  
 

 
  return 0;
}