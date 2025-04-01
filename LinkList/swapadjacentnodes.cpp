#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string remv(string &s)
{
  stack<char> st;
  string se="";
  for (int i = s.size()-1; i >=0; i--)
  {
    if (st.empty())
    {
      st.push(s[i]);
    }
    else if (s[i] == '(')
    {
      st.push(s[i]);
    }
    else if (s[i] == ')' && st.top() == '(')
    {
      // se.push_back(st.top());
      st.pop();
    }
    else if (s[i] == '(' && st.top() == ')')
    {
      se.push_back(st.top());
      st.pop();
      se.push_back(st.top());
      st.pop();
      st.push(s[i]);
    }
    }
     
    //  while (!st.empty())
    //  {
    //   s.push_back(st.top());
    //   st.pop();
    //  }
     return se;
     

  
}

int main()
{
  string s = "(()())";
  // cout << remv(s);\

  stack < char > st;
  for (int i = 0; i <s.size(); i++)
  {
    st.push(s[i]);
    /* code */
  }
  st.pop();
  st.pop();
  while (!st.empty())
  {
    cout<<st.top();
    st.pop();
    /* code */
  }
  
  

  return 0;
}