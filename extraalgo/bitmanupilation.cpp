// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

void getbit(int n)
{
  int bitmask = 1 << 1;

  if ((bitmask & n) == 0)
  {
    cout << "bit is zero";
  }
  else
  {
    cout << "bit is 1";
  }
}

void setbit(int n)
{
  int bit = 1 << 1;
  n = bit | n;

  cout << n;
}

void clearbit(int n)
{
  int bitm = 1 << 2;
  int notbit = ~(bitm);

  n = notbit & n;
  cout << n;
}

void updatebit(int n)
{
  int bitmask=1<<1;
  
}

int main()
{
  int n = 5;

  getbit(n);
  cout << endl;
  setbit(n);
  cout << endl;
  clearbit(n);
  cout << endl;

  return 0;
}