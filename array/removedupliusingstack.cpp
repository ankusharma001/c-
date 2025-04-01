#include <iostream>
#include <stack>
#include <string>
using namespace std;

//you can use this to remove duplicate but it is not applicable in every test cases example => abcabc

string isduplicate (string str)
{
    int i=0;

    stack <char> b;

    while(i<str.length())
    {
        if (b.empty()||str[i] != b.top())
        {
            b.push(str[i]);
            i++;

        }
        else
        {
            b.pop();
            i++;
        }

        if(str.empty())
        {
            return ("stack is empty ");
        }
        else {
            string short_string="";
            while (!str.empty())
            {
                short_string=b.top()+short_string;
                b.pop();
            }return (short_string);
        }
    }

}
int main()
{
    string str;
    cin>>str;  
   
   cout<<isduplicate(str);
   

return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// // Function to remove adjacent 
// // duplicate elements 
// string ShortenString(string str1)
// {
     
//     // Store the string without 
//     // duplicate elements 
//     stack<char> st; 
     
//     // Store the index of str 
//     int i = 0;
     
//     // Traverse the string str
//     while (i < str1.length())
//     {
         
//         // Checks if stack is empty or top of the 
//         // stack is not equal to current character 
//         if (st.empty() || str1[i] != st.top())
//         {
//             st.push(str1[i]);
//             i++;
//         }
             
//         // If top element of the stack is 
//         // equal to the current character 
//         else
//         {
//             st.pop(); 
//             i++;
//         } 
//     }
     
//     // If stack is empty 
//     if (st.empty())
//     {
//         return ("Empty String");
//     }
         
//     // If stack is not Empty 
//     else
//     {
//         string short_string = ""; 
//         while (!st.empty())
//         {
//             short_string = st.top() + 
//                            short_string;
//             st.pop();
//         }
//         return (short_string);
//     }
// }
 
// // Driver Code
// int main()
// {
//     string str1 ="abcabc";
     
//     cout << ShortenString(str1); 
 
//     return 0;
// }