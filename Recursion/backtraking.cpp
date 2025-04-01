//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

 /* In backtrackning the functin is stored in stack and the output is writen aftere the recursive function */

void back(int a)
{
  if(a<1) 
  {
    return ;
  }


  back(a-1);
  cout<<a<<endl;
}
void backtrac(int a)
{
  if(a>5)
  {
    return ;
  }
  
  backtrac(a+1);
  cout<<a<<endl;
}

//sum of n numbers

int sum(int a,int b)
{
  if(a<1)
  {
    return b;
  }
  b+=a;
  
  sum (a-1,b);
  }


int main()
{
  int a;
  int b;
  cin>>a;
  cin>>b;

  back(a);
  // cout<<endl;
  // backtrac(b);
  
  return 0;
}