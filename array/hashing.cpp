#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
//Time complixity =====>>>>> o(Q*n)
 
void hashing()
{

}


//arr[1e7] == > globaly
int main()
{
    int arr[10]={1,4,2,1,5,1,2,1,2,4};
    int a = sizeof(arr)/sizeof(arr[0]);


    int hash [13]={0};
    for (int  i = 0; i < a; i++)
    {
      hash [arr[i]]+=1 ;
    }
    // sort (hash,hash +a+1);
    
    // int  q=1;
    // // cin>>q;
    // while (q--)
    // {

      //arr[1e6]
      for (int i = 0; i < a; i++)
      {
         int number =arr[i];
      // cin>>number ;
      cout<<hash[number]<<" ";
      }
      cout<<endl;
      
      for (int i = 0; i < a+1; i++)
      {
        cout<<hash[i]<<" ";
      }

      cout<<arr[hash[a]];
      
     
    // }


    string alpha= "kjfjvbjb";

    
return 0;
}