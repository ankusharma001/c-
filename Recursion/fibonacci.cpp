//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 //multiple recursion calls
 //time complixity = 2n
int  fibo(int a)
{
  if(a<=1){
    return a;
  }

  // fibo (a-1);
  // fibo(a-2);
  return fibo (a-1)+ fibo(a-2);

}
 
int main()
{
  int a;
  cin>>a;
  

  cout<<fibo(a);


  
  
  return 0;
}