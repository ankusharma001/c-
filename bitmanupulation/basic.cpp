#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
void pattern ()
{
 
}
 
int main()
{
  int n =10;

  string str;
  while (n!=1)
  {
    if(n%2 == 1)
    {
     str += "1";
    }

    else 
    {
     str += "0";
    }
    n = n /2;



  }

  reverse(str.begin(), str.end());


  cout<< "1" + str<< endl;

  string str2 = "1001";

  int num =0;
   int p=0;



  for (int i = str2.size()-1; i>= 0;i--)
  {
    if (str2[i] == '1')
    {
      num += pow(2,p);
    }
    p++;

  }

  cout<<num;



 
  return 0;
}