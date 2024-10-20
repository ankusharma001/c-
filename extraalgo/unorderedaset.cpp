//#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
 
using namespace std;
 
int main()
{

  /*

  set is sorted 
  unordered set in not sorted
  u can not insert duplicate keys
size()
insert ()
begin()
end()
find()
erase()

count()-> 0 or 1

it is similar in unordered-map

  
  */
    int arr[]={1,4,51,34,454,1};

    int count =sizeof(arr)/sizeof(arr[0]);

    unordered_set <int> a;
    for (int i = 0; i < count; i++)
    {
      a.insert(arr[i]);
    }

    for(auto it :a)
    {
      cout<<it<<" ";
    }cout<<endl;
    cout<<a.size()<<endl;

   if(a.find(1)!=a.end()){
    cout<<"key is   found"<<endl;

   }

   else {
    cout<<"key is not found"<<endl;
   }

    

    
return 0;
}