#include <iostream>
#include <stack>
using namespace std;
 
void isBalanced(string a)
{
  stack <char> check ;
  int x=0;
 
  for (int i = 0; i < a.length(); i++)
  {
    
    if(a[i]=='{'||a[i]=='['||a[i]=='(')
    {
      check.push(a[i]);
      continue;
    }
    if(check.top()=='{'&&a[i]=='}'
    ||check.top()=='['&& a[i]==']'
    ||check.top()=='('&&a[i]==')')
    {
     
      check.pop();
      x++;
      
    }
    else {
      check.push(a[i]);
    }
    /* code */
  }
  if(check.empty())
  {
   cout<<"balanced";
  }
  else{
    cout<<"not balanced ";
  }
  while (!check.empty())
  {
    cout<<check.top()<<" ";
    check.pop();
  }
 
}

int main()
{
  
  string  a="()[]{}";

  isBalanced(a);
 
return 0;
}