#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="2121212152544866879";
    sort(str.begin(),str.end(),greater<int>());
    
    cout<<str;

    return 0;
}