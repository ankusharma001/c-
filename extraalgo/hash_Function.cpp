//#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
 
using namespace std;


 /*
 collisoin handling
 * chaining
 * open adddressing
   (linear probing)
   (quadratic probing)
   (double hashing) */

//unordered set

/*
u  can not insert duplicate vlaue 
*/

int main()
{
    // int arr[]={15,45,7,4,154,1,5451,8};
    // int a=sizeof(arr)/sizeof(arr[0]);

    unordered_set<int>a;

    a.insert(12);
    a.insert(15);
    a.insert(78);
    a.insert(98);
    a.insert(45);

    for (auto i = a.begin(); i !=a.end(); i++)
    {
        cout<<(*i)<<endl;
    }

    int key=12 ;

    if(a.find(key )== a.end())
    {
        cout<<"key is not here"<<endl;

    }
    else{
        cout<<" key is  here"<<endl ;
    }
    





    
return 0;
}