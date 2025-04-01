#include <iostream>
 
using namespace std;
 
int main()
{
    int a=308;
    int i=3;
    int mask =1<<i;
    if((a&mask)!=0)
    {
      cout<<i<<"th bit is set "<<endl ;

    }
  else {
    cout<<i<<"th bit is unset "<<endl ;

  }
return 0;
}