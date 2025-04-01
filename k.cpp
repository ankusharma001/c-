
#include <algorithm>
#include <iostream>
#include <vector>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

int fact (int  n )
{
  if (n==0)
  {
    return 1;
  }
  int first = fact(n-1);
  int second = n*first;

  return second;
}

int main()
{

  vector <int > arr = {1,2,1,5,-1,0,-2,-8,0};
  vector <int> zero ;
   vector <int> pos;
   vector<int> neg;

   sort (arr.begin(), arr.end());
   for(int i =0; i< arr.size();i++ )
   {
    if (arr[i] == 0)
    {
        zero.push_back(arr[i]);
    }
    else if (arr[i]>0)
    {
        pos.push_back(arr[i]);
    }else{
        neg.push_back(arr[i]);
    }
   }

   sort(neg.rbegin(), neg.rend());

   for(int i =0 ;i<zero.size();i++)
   {
    cout <<zero[i]<< "";
   }
   cout<<endl;
  for(int i =0 ;i<pos.size();i++)
   {
    cout <<pos[i];
   }
   cout<<endl;
  for(int i =0 ;i<neg.size();i++)
   {
    cout <<neg[i];
   }
   cout<<endl;

   vector <int> ans;
   int size =0;
   int ns = neg.size();
   int ps= pos.size();
   

   if (ns>ps)
   {
    size= ps;
   }
   else{
    size= ns;
   }
   for (int i = 0; i < size; i++)
   {
    if ( abs(neg[i]) > pos[i] )
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    else if (abs(neg[i])== pos[i])
    {
        ans.push_back(neg[i]);
        ans.push_back(pos[i]);
    }
   }
   if (ns!=ps)
   {
    if(ps > ns)
    {
        for(int i = ns ; i < ps;i++)
        {
            ans.push_back(pos[i]);
        }
    }
    else{
        for(int i =ps ; i< ns;i++)
        {
            ans.push_back(neg[i]);
        }
    }

   }
   cout<<endl;
   for(int i =0;i< ans.size();i++)
   {
    cout<< ans[i]<< " ";
   }
  


  

    return 0;
}
