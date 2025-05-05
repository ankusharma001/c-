#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
void getpermut(vector<int>&nums,int idx , vector<vector<int>> & ans)
{
  if (idx == nums.size())
  {
    ans.push_back(nums);
    return;
  }

  for (int i =idx ; i< nums.size();i++)
  {
    swap(nums[idx],nums[i]);
    getpermut(nums,idx+1,ans);
    swap(nums[idx],nums[i]);

  }

}

void getnumber(int a)
{
  if ( a==0){
    return;
  }
  
  getnumber(a-1);
  cout<<a<<" ";

}
 
int main()
{
  vector<int> arr={1,2,3};
  vector<vector<int>> ans;

  string str = "1";
  string str2 = "2";

  cout<< str + str2 << endl;
  
  // getpermut(arr,0,ans);
  // getnumber (7);

//  for (int i =0;i< ans.size();i++)
//  {
//   for(int j =0 ;j< ans[0].size();j++)
//   {
//     cout << ans[i][j]<<" ";
//   }
//   cout<<endl;
//  }


}