// #include <iostream>
//  #include<vector> 
// using namespace std;
 
//  class student {
//     int a;
//     public:
    

//  };
// void display (vector<int > &v)
// {
//     for (int  i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" "<<endl;
//         // cout<<v.at(i)<<" "<<endl;
        
//     }
    

// }

// int main()
// {
//     vector <int > v(5);
    
//     v.push_back(5);
    

//     vector<int > :: iterator it=v.begin();
//     v.insert (it+2,2,7);
//     v.erase(it+1);
//     v.pop_back();
//     display(v);


// return 0;
// }

#include <iostream>
#include <list >
#include <deque>
#include <set>

using namespace std;

void display (list <int> &l)
{
    list <int>::iterator itr ;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<*itr<< " ";

    }
    cout<<endl;

}
 
int main()
{
    deque <int> dq{5,45,1,2,12,1};
    list<int >l{45,4,548,4,54};
    l.push_back(5);
    display(l);

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl ;

    set <int> s{4,54,14,5,3,2};
    for(auto i:s)
    {
        cout<<i<<" ";
    }
return 0;
}