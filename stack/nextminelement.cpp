#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 

 
int main()
{
  vector <int> arr = {1,2,4,3,43,4,3,34};

  vector <int> ans;
  stack<int> st;



  for(int i =arr.size()-1;i>= 0;i--){

    while(!st.empty() &&st.top()< arr[i])
    {
      st.pop();
    }
    
    if( st.empty())
    {
      ans.push_back(-1);

    }
    else {
      ans.push_back(st.top());
      
    }
  
    st.push(arr[i]);
    

  }

  reverse(ans.begin(),ans.end());

  for(auto it : ans)
{
  cout << it << " ";
}

  return 0;
}