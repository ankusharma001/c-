// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
/*
the program or function which call itself until the specific cindition meet is called recursion*/

void reuturn(int a, string &name)
{
  if (a < 1)
  {
    return;
  }

  cout << a << endl;

  a--;
  reuturn(a, name);

  // reuturn();
}

//sum of n numbers parameterized

void sum(int a,int b)
{
  if(a>5)
  {
    cout<<b;
    return ;
  }
  b+=a;
  
  sum (a+1,b);
  }

  //functionla 

int fun(int a)
{
  if(a==0)
  {
    return 0 ;
  }

  return a + fun(a-1);

  }


int main()
{

  int a;
  cin >> a;

  int b ;
  cin >>b;
 

 sum(a,0);
 cout<<endl;

 cout<<fun(b);



  return 0;
}