#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;
double ar[10000000]; // to power 7 globally we acan declare

int main()
{
  int arr[] = {1, 15, 21, 51, 15, 89};
  int a = sizeof(arr) / sizeof(arr[0]);

  int hash[90] = {0};

  for (int i = 0; i < a; i++)
  {
    hash[arr[i]] += 1;
  }
  // 10 power 6  arr[1000000]

  // for (int i = 0; i < 90; i++)
  // {
  //   cout<<hash[i]<<" ";
  // }

  // int q;
  // cin>>q;
  // while (q--)
  // {
  int number = 89;
  // cin>>number ;

  cout << hash[89] << endl;
  // }
  // in char

  string ch = "gfgcfxdxx";

  int chr[26] = {0};

  for (int i = 0; i < ch.length(); i++)
  {
    chr[ch[i] - 'a']++;
    // cout<<chr[i]<<" ";
    // cout<<ch[i]<<" ";
  }

  char f = 'a';
  cout << abs(chr[f - 'a']) << endl;
  // cout<< 'a'-'f';

  // if value exceeds 1e7 we can use map
  //map store all the vlauein sorted order  
  // time complixity -->> logN

  //unordered map  time complixity o(1)
  //worst case o(N)

  int marr[]={1,45,7,4548,46656,67784,654468465,116546,16487,48,7,487,646884,6516,54651,65465,46,646};
  int s=sizeof(marr)/sizeof(marr[0]);
 unordered_map<int ,int > mp;

  

  for (int  i = 0; i < s; i++)
  {
    mp[marr[i]]++;
  }


  //itrate in map
  
  // for(auto it: mp)
  // {
  //   cout<<it.first <<" -> "<<it.second <<endl ;
  // }

  int find=54651;

  cout<<mp[find]<<endl;

  map <char ,int > chmp;

  string chs="dhjhbdj";

  for (int i = 0; i < chs.length(); i++)
  {
    chmp[chs[i]]++;

  }
  // for(auto it: chmp)
  // {
  //   cout<<it.first <<" -> "<<it.second <<endl ;
  // }

  cout<<chmp['b']<<endl;

//division method == > chaining  which is only bedone by linklist 

unordered_map<char,int> fin;

fin['b']=2;
fin['c']=5;
fin['b']=8;
fin['h']=8;
// fin.insert(make_pair("d",1));



if(fin.find('b')!=fin.end())
{
  auto temp = fin.find('b');

  cout<<"key is "<<temp->first<<endl;
  cout<<"value  is "<<temp->second<<endl;
}
for(auto it :fin )
{
  cout<<" value " << it.first<<" value is "<<it.second<<endl;
}  
  




  return 0;
}