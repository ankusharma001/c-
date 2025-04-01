//#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#define MAX 1000
 
using namespace std;



/*hashing => hashing is just an array which we modify according to our need to store the indexs of the element so that we can access them easily in minimul time 


benifit of hashing
1) search 
2) insert 
3) delete    


not useful 
1) findiing closet value 
2)sorting 
 

application
1) dictionary 
2) crytography
3) caches
4)symbol table
5) routers 

direct access table cannot work fine in case of large value it will take time to find the value eg if the value is 100000*/

bool hashh [MAX+1][2];
bool search (int c){
  if(c>=0)
  {
    if(hashh[c][0]==1)
    {
      return true;
    }
    else{
      return false;

    }

  }
else
{
  c=abs(c);
  if(hashh [c][1]==1)
  {
    return true;
  }
  else {
    return false ;
  }
}
}

void insert (int a[],int n )
{
  for (int i = 0; i < n; i++)
  {
    if (a[i]>=0)
    {
      hashh[a[i]][0]=1;
    }
    else{
      hashh[abs(a[i])][1]=1;
    }
    
  }
  
}
 


int main()
{
    int arr[]={4,-7,-8,4,5,1,-5,6,9,7};
    int a=sizeof(arr)/sizeof(arr[0]);

    insert (arr,a);

    int find =4;
    if(search (find ))
    {
      cout<<"element is present "<<" ";

    }
    else{
      cout<<" element is not present"<<" ";
    }

    //hash table 

    



return 0;
}