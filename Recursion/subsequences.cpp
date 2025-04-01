#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void subsequence(int idx, vector<int> &ds, int arr[], int n)
{

  if (idx >= n)
  {
    cout << "{";
    for (auto it : ds)
    {
      cout << it << " ";
    }
    if (ds.size() == 0)
    {
      cout << "{}";
    }
    cout << "}";
    cout << endl;
    return;
  }

  ds.push_back(arr[idx]);
  subsequence(idx + 1, ds, arr, n);
  ds.pop_back();
  subsequence(idx+1,ds,arr,n);
}

int main()
{
  int arr[3] = {3, 1, 2};

  int n = 3;
  vector<int> s;

  subsequence(0, s, arr, 3);

  return 0;
}