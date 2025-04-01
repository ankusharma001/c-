// #include <iostream>
//  #include<algorithm>
// using namespace std;
 
// int main()
// {
   
//     int arr[]={1, -2, 3, 10, -4, 7, 2, -5};
//    int n =sizeof(arr)/sizeof(arr[0]);
//    long int count =0;
//    long int count1=0;
//    for(int i=0;i<n;i++)
//    {
//     count=0;
//     for (int j = i; j < n; j++)
//     {
//         count +=arr[j];
//         count1+=count;
//     }
    
//    }

//    cout<<count1<<endl;

// return 0;
// } 

// #include <iostream>
 
// using namespace std;
//  class student 
//  {
//     string b;
//     string d;
//     public:
//     student (){}
//     student (string& a,string& c):b(a),d(c){}
//     student operator+()
//     {

//         b=b+d;
        
//     }

//     void display()
//     {
//         cout<<"anjndj"<<b<<endl;
//     }

//  };
//  class school: public student 
//  {};
// int main()
// {
//     string a;
//     string c;
    
//     student obh(a,c);
//     +obh;
//     obh.display();
//     school obj;
//     obj.display();
    

    
// return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// int maxSocksOnTable(int n, const vector<int>& sockSequence) {
//     unordered_set<int> onTable;
//     int maxSocks = 0;

//     for (int i = 0; i < 2 * n; ++i) {
//         int sock = sockSequence[i];

//         if (onTable.count(sock) == 0) {
//             onTable.insert(sock);
//         } else {
//             onTable.erase(sock);
//         }

//         maxSocks = max(maxSocks, static_cast<int>(onTable.size()));
//     }

//     return maxSocks;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> sockSequence(2 * n);
//     for (int i = 0; i < 2 * n; ++i) {
//         cin >> sockSequence[i];
//     }

//     int result = maxSocksOnTable(n, sockSequence);
//     cout << result << endl;

//     return 0;
// }


// #include <iostream>
//  #include <vector>
//  #include <unordered_set>
// using namespace std;
// int  al(int a, const vector<int>& d)
//  {
//     unordered_set<int > s;
//     int emax =0;
   
//     for (int i = 0; i < a*2; i++)
//     {
//         int socl=d[i];
//         /* code */
//      if (s.count(socl)==0)
//      {
//         s.insert(socl);
//      }
//      else
//      {
//         s.erase (socl);
//      }
//      emax = max (emax,static_cast<int > (s.size()));
     
//     }
//     return emax;
    

//  }
// int main()
// {
//     int a;
//     cin>>a;
//     vector<int > ds(a*2);
//     for (int  i = 0; i < a*2; i++)
//     {
//         /* code */
//        cin>>ds[i];
//     }
    
    
//     cout<<al(a,ds);

// return 0;
// }

//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
bool isArmstrong(int a)
{
   int temp=a;
   int rev=0;
   while(temp!=0)
   {
      rev=rev*10+temp%10;
      temp=temp/10;
      

   }cout<<rev;
   if(rev == a)
   {
      return true;
   }
   else{
   return false ;
   }

}

int main()
{
    int a=123;
   if ( isArmstrong(a)){
      cout<<" number is armstrong"<<endl;
   }
   else{
      cout<<" Number is not rmstrong"<<endl;
   }
return 0;
}

