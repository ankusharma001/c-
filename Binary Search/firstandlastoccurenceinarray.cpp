#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;

vector <int> fandloccurabce(vector <int> arr,int target)
{

  vector<int > ans (2,-1) ;
  auto lb = lower_bound(arr.begin(),arr.end(), target);
  int lowerbound = lb - arr.begin();

  auto Ub = upper_bound(arr.begin(),arr.end(), target);
  int UPPERBOUND = Ub- arr.begin();

  if( lowerbound == arr.size() || arr[lowerbound] != target )
  {

    return ans ;

  }
  ans[0] = lowerbound;
  ans[1] = UPPERBOUND -1;

  return ans;
}

int main()
{

  vector <int> arr = {1,4,5,6,7,8,9,12,35,45,89,888};

  vector <int> ans = fandloccurabce(arr, 8);

  cout << ans[0] << " "<< ans[1];

 
  return 0;
}