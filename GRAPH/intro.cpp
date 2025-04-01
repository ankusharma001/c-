//graphs 
// undirected and directed 
// ..their are node and edge 


#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 

 
int main()
{
  int n , m;

  cin>> n >> m;

  //matrix

  int adj[n+1][m+1];

  for(int i =0 ;i< m ;i++)

  {
    int v ,  u; 

    cin >> v >>u;

    adj [v][u]=1;
    adj [u][v]=1;


  }

  //list 

  vector <int> adj1[n+1];
  // vector <pair<int,int> >adj1[n+1];

  for (int i = 0; i <m ; i++)
  {
    int v, u;

    cin >> v >>u;

    //if direct one of the situation will be removed depends on the question
   adj1[v].push_back(u);
    adj1[u].push_back(v);

    //if weighted graph u have to use weight instead to 1 in pairs
    // adj1[v].push_back({u,4});
    // adj1[u].push_back({v,8});

  }


 
  return 0;
}