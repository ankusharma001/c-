#include <iostream>
#include <vector>
using namespace std;

void printpair(vector <pair<int,int>> &v)
{
    cout<<v.size()<<endl;

    for (int  i = 0; i < v.size(); i++)
    {
     cout<<v[i].first<<" "<<v[i].second; 
     cout<<endl;  
    }
    
    
}

int main()
{
    //vector of pair 
    vector <pair<int,int >> par={{1,2},{3,4},{5,6}};

    // user input 

    // for (int i = 0; i < n; i++)
    // {
    //     int x , y ;
    //     cin>>x>>y;
    //     par.push_back({x,y});
    //     /* code */
    // }
    

    printpair(par);

    // arr of vector

    vector <int> arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     int x ;
    //      cin>>x;
    //      arr[i].push_back(x);
        
    // }

    //vector of vector

    vector <vector<int>> vv;
    
    int N;
    cin>>N;
    for (int  i = 0; i < N; i++)
    {

        int n;
         cin>>n;
         vector <int> temp;    
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin>>x;
        temp.push_back(i);
    }
    vv.push_back(temp);
    }

    for (int i = 0; i < vv.size(); i++)
    {
        // printpair(vv[i]);
         
    }
    


    
    


return 0;
}