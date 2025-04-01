#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
/* new keyword/operator is for dynamically  aloocation of vlaue to the pointer 

delete key word is for delete the value in the pointer in ur vode */
int main()
{

  // int *p = new int (5654);

  // cout<<*p<<endl;

  // delete p;
  // cout<<p;

  string str="";
    
        unordered_map<char,int>value;

        for(int i=0;9<str.size();i++)
        {
            value[str[i]]==1;
        }
        int count =0;
        for(auto it:value)
        {
            if(it.second==1)
            {
            count ++;
            }
        }
       cout<<count ;



  
 
  return 0;
}