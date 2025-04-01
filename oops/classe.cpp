// #include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*

1. data Abstration & Encapsulation - wraping data

data hiding is not possible in structure u  can use function

clss --> extenstion of structure

structurer has limitations -> memebers are public
                           -> no metheds
 classes = structures + more
 classes -> can have motheds and properties
 classes -> can make few membeers as private & few as public

*/

class employ
{

private:
  int a, b, c;

public:
  int d, e;
  void setdata(int a1, int b1); // declare
  void getdata()
  {
    cout << "hey " << a << " " << b << endl;

    cout << e;
  }

} sharma;

void employ ::setdata(int a1, int b1)
{
  a = a1;
  b = b1;
}

class binary
{

  string s;

public:
  void read(void);
  void output(void);
} set;

void binary::read(void)
{
  cout << " entert the number";
  // cin>>s;
  s = "87878";
}

void binary::output(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != '0' || s[i] != '1')
    {
      cout << endl
           << "Invalid";
      exit(0);
    }

    else
    {
      cout << "valid";
    }
  }
  cout << endl;
}

int main()
{

  set.read();
  set.output();
  
  employ ankush;

  ankush.e = 900;
  
  ankush.setdata(48, 35);
  ankush.getdata();

  sharma.setdata(484, 454);
  sharma.getdata();

  return 0;
}