//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

/* this is a keywoord which is a pointer which points to the object which invokes the member function*/
 
class a{
  int a;
  public:

  void setdata(int a)
  {
    this->a=a;
  }

  void getdata()
  {
    cout<<"value od a is : "<<a<<endl;
  }
} ankush ;
 
int main()
{
 ankush.setdata(45);
 ankush.getdata();
  return 0;
}