
#include <bits/stdc++.h>
// #include <iostream>
 
using namespace std;
 
int main()
{
    pair <int ,int > p={1,3}; //only store two value but u can use nested  pair it lies in teh utility library 

    vector<int> v(5,8); //store value in dynamically 

    v.push_back(4);
    v.emplace_back(2);

    vector<pair<int ,int>> pr;
    pr.push_back({1,2});
    pr.emplace_back(1,5);
    
    for (vector <int>  ::iterator it = v.begin(); it!=v.end();it++)
    {
      cout<<*(it)<<" ";
      
    }
     for (auto it = v.begin(); it!=v.end();it++)
    {
      cout<<*(it)<<" ";
      
    }

    v.erase(v.begin()+1,v.begin()+4);

    v.insert(v.begin()+2,5);

    list <int> ls;//linklist

    ls.push_back(4);
    ls.emplace_back(5);

    ls.push_front(7);
    ls.emplace_front(8);


    //deque
    deque <int> dq;

    dq.push_back(4);
    dq.emplace_back(5);

    dq.push_front(7);
    dq.emplace_front(8);

    dq.pop_back();
    dq.pop_front();

    //stack 
    stack <int> s; //lifo

    s.push(15);
    s.pop();
    
    s.emplace(789);
    s.top();

    //queue 
    queue <int> q;//fifo

    q.push(54);
    q.emplace(59);

    q.back()+=5;
    q.front();

    q.pop();

    //priority_queue

    priority_queue<int> pq; //max heap

    pq.push(454);
    pq.emplace(4484);

    pq.pop();
    pq.top();

    priority_queue<int , vector<int> , greater<int>> pq1; // min heap 

    //set 

    set <int > st; //store only unique value and in sorted form
    st.insert(4);
    st.emplace(5);
    st.insert(4);

    auto it = st.find(3);

    st.erase(3);
    st.count(4);

    //multiset 
    multiset <int> ms; //set in sorted form 

    ms.insert(89);
    ms.erase(4);

    ms.count(89);
    ms.find(89);

    //unordered set 

    unordered_set <int> us;
     us.insert(89);
    us.erase(4);

    us.count(89);
    us.find(89);

    //map
    map <int ,int> mp;//key and values unique jey on sortted order

    mp[1]=2;

    // mp.emplace({1,09});
    // mp.insert(787);

    //multimao
    multimap<int ,int >ml;

    //algorithm
    // sort(v.begin(),v.end(), greater<int>);
    // sort(v.begin(),v.end(), comp);

    

return 0;
}