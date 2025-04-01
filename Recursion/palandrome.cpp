// // //#include <bits/stdc++.h>
// // #include <iostream>
// // #include <string>
 
// // using namespace std;

// // bool palandrome (string &str,int a)

// // {

// //   if(a>=str.size()/2)
// //   {
// //     return true;
// //   }
// //  if(str[a]!=str[str.size()-a-1]){
// //     return false;

// //   }
// //   palandrome(str,a+1);

// //   // if(a>=b)
// //   // {
// //   //   return true;
// //   // }
// //   // if(str[a]!=str[b-1])
// //   // {
// //   //   return false;
// //   // }
// //   // palandrome(str,a+1,b-1);


// // }
 
// // int main()
// // {
// //   string s ="ab";

// //   if(palandrome (s,0)){
// //     cout<<"pal";
// //   }
// //   else{
// //     cout<<" not pal";
// //   }


  
// //   return 0;
// // }


// // #include <bits/stdc++.h>

 
// // using namespace std;
 
// // int main()
// // {
// //   int a;
// //   int b;
// //   cin>>a>>b;

// //   int arr[a]={45,32,67,21,12};

// //   for (int i = 0; i < a; i++)
// //   {
// //     cout<<arr[i];
// //   }
// //   sort(arr,arr+a);

// //   cout<<arr[b-1];


 
// //   return 0;
// // }

// #include <iostream>


// using namespace std;

// int countSetBits(int n) {
//     int count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }

// int totalSetBits(int A) {
//     int total = 0;
//     for (int i = 1; i <= A; i++) {
//         total += countSetBits(i);
//     }
//     return total;
// }

// int main() {
//     int A;
//   cin >> A;
    
//     if (A <= 0) {
        
//         return 1;
//     }
    
//     int result = totalSetBits(A);
//   cout<<result;
    
//     return 0;
// }

//#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
void pattern ()
{
 
}
 
int main()
{
string str;
cin>>str;

int size=str.size();

int count =0;
int space=0;
for (int  i = 0; i < str.size(); i++)
{
  if(str[i]==' ')
  {
    space++;
    break;
  }

  else if(str[i]=='a'||str[i]=='')
  /* code */
}

 
  return 0;
}


#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    // Check if there are blanks in the input
    for (char c : input) {
        if (isspace(c)) {
            cout << "Blanks are not allowed." << endl;
            return 0;
        }
    }

    // Count vowels and consonants in the first 20 characters
    int vowelCount = 0, consonantCount = 0;
    for (int i = 0; i < min(20, static_cast<int>(input.size())); ++i) {
        char currentChar = tolower(input[i]);
        if (isalpha(currentChar)) {
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
                currentChar == 'o' || currentChar == 'u') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        }
    }

    // Display the counts
    cout << "Vowels count: " << vowelCount << endl;
    cout << "Consonants count: " << consonantCount << endl;

    return 0;
}