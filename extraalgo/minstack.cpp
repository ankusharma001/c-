// #include <bits/stdc++.h>
// //#include <iostream>

// using namespace std;

// // 2 x val - prev-min = new val push to stack

// int main()
// {
//   vector <int> arr = {1,4,5,7,8};

//   stack <pair<int,int>> st;

//   for (int i = 0; i < arr.size(); i++)
//   {
//     if (st.empty())
//     {
//       st.push({arr[i], arr[i]});

//     }
//     else
//     {
//       st.push({arr[i],max(arr[i],st.top().second)});
//     }
//   }

//   cout<< st.top().second;

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr = {1, 4, 5, 7,9, 8};
  stack<long long> st;
  long long mini = LLONG_MAX;

 

  for (int i = 0; i < arr.size(); i++)
  {
    long long val = arr[i];
    if (st.empty())
    {

      mini = val;
      st.push(val);
    }
    else
    {

      if (val < mini)
      {
        st.push(2 * val - mini); 
        mini = val;
      }
      else
      {
        st.push(val);
      }
    }
  }

  // Show the current top value
  long long el = st.top();
  cout << "Top: ";
  if (el < mini)
  {
    cout << mini << endl; // actual value
  }
  else
  {
    cout << el << endl;
  }

  // Show the minimum
  cout << "Minimum: " << mini << endl;

  // Now pop
  el = st.top();
  st.pop();
  if (el < mini)
  {
    mini = 2 * mini - el;
  }

  // Show values after pop
  el = st.top();
  cout << "Top after pop: ";
  if (el < mini)
  {
    cout << mini << endl;
  }
  else
  {
    cout << el << endl;
  }
  cout << "Minimum after pop: " << mini << endl;

  return 0;
}
