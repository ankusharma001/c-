// #include <iostream>

// using namespace std;

// //  int print (int i,int n)

// //  {
// //  if(i>n)
// //         return 0;

// //     print(i+1,n);
// //    cout<<i<<endl;
// //  }

// int print (int i)
// {
//     if(i==0)
//     {
//         // cout<<sum;
//         return 1;
//     }
//     return i*print(i-1);
//     // print(i-1,sum+i);
// }
// int main()
// {
//     int a=4;

//     cout<<print (a);

// return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(int a[], int l, int n)
{
    if (l >= n / 2)
    {
        return;
    }
    swap(a[l], a[n - l - 1]);
    print(a, l + 1, n);
}

bool pal(int l, string &a)
{
    if (l >= a.size() / 2)
    {
        return true;
    }
    if (a[l] != a[a.size() - l - 1])
    {
        return false;
    }
    pal(l + 1, a);
}
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    fibo(n - 1);
    fibo(n - 2);
    return fibo(n - 1) + fibo(n - 2);
}

int sequence(int n, vector<int> &a, int g[], int s)
{
    if (s >= n)
    {
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
        return 0;
    }

    a.push_back(g[s]);
    sequence(n, a, g, s + 1);
    a.pop_back();
    sequence(n, a, g, s + 1);
}

int natural(int j)
{
    if (j == 0)
    {
        return 0;
    }

    return natural(j - 1) + j;
}

int main()
{
    // int n;
    // cin>>n;

    int a[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */cin>>a[i];
    // }

    int n = sizeof(a) / sizeof(a[0]);
    print(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        /* code */ cout << a[i] << " ";
    }
    cout << endl;

    string s = "madam";
    if (pal(0, s))
    {
        cout << "yes";
    }

    else
    {
        cout << "no";
    }
    int f = 4;
    cout << fibo(f) << endl;

    int arr[3] = {3, 1, 2};
    vector<int> ds;
    sequence(3, ds, arr, 0);

    int j = 3;
    cout << natural(j);
    cout << endl;

    return 0;
}
