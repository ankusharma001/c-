#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 

 
int main()
{
 // swap 
    int sum1 = 5; 
  int sum2 =6;
   sum1 = sum1 ^ sum2;
    
   sum2 = sum1 ^ sum2;
   
   sum1 = sum1 ^ sum2;
     cout << " "<<sum1 << " "<< sum2;

     //ith poisition

     int n =13;
      int i = 2;
       int one =1;
       

        if (n & (one<<i) != 0)
        {
          cout<< "set ";
        }
        else 
        {
          cout<<"not set";
        }
        if (n>> 2 & one != 0 )
        {
          cout<<"set";
        }
        else 

        {
          cout<<"not set";
        }

        //set ith bit 

        int num = 70; 
        num =  num  | (1 <<3); 
        cout<<endl<<num;

        // clear ith bit

        int nums = 13;
        nums = nums & (~ (1<<i));
        nums = nums ^ (1<<i);
        cout<<endl<<nums;

        // convert first set bit
        int setbit = 84;
        cout <<endl <<  (setbit & setbit-1);

        //pow of 2

        int powy = 60;
        if ( (powy & (powy-1) )== 0)
        {
          cout<<"even ";
        }
        else 
        {
          cout<<"odd";
        }

        // count number of set


 
 
 
  return 0;
}