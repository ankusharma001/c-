// <<<<<<< HEAD
// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>

// using namespace std;

// // Time complixity ==>>>>O(n2)     =>>>>> n2/2
// void selection_sort(int arr[], int a)
// {
//   // 1)
//   //  for (int i = 0; i < a-1; i++)
//   //  {
//   //    int min = i;
//   //    for (int j = i; j < a; j++)
//   //    {
//   //      if(arr[j]<arr[min])
//   //      {
//   //        min=j;
//   //      }

//   //   }
//   //   swap(arr[min],arr[i]);
//   // }

//   // 2)

//   int min = 0;
//   for (int i = 0; i < a - 1; i++)
//   {
//     for (int j = i; j < a; j++)
//     {
//       if (arr[i] > arr[j])
//       {
//         min = arr[i];
//         arr[i] = arr[j];
//         arr[j] = min;
//       }
//     }
//   }

//   // 3))
//   //  for (int  i = 0; i < a-1; i++)

//   // {
//   //   int min = i;
//   //   for (int j = 0; j < a; j++)
//   //   {
//   //     if(arr[j]>arr[min])
//   //     {
//   //       min=j;

//   //     }
//   //     int temp =arr[min];
//   //     arr[min]=arr[i];
//   //     arr[i]=temp;

//   //   }
//   // }
// }

// int main()
// {
//   int arr[10] = {5, 4, 8, 7, 6, 2, 1, 5, 9, 3};
  
//   int a = sizeof(arr) / sizeof(arr[0]);
//   selection_sort(arr, a);

//   for (int i = 0; i < a; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   // conoverting string to integere using librayry
//   //  string h ="4";
//   //  string s ="4";

//   // int b = stoi (h) ;
//   // int d=stoi( s);
//   // cout<<b+d;


  

//   return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

// Time complixity ==>>>>O(n2)     =>>>>> n2/2
void selection_sort(int arr[], int a)
{
  // 1)
  //  for (int i = 0; i < a-1; i++)
  //  {
  //    int min = i;
  //    for (int j = i; j < a; j++)
  //    {
  //      if(arr[j]<arr[min])
  //      {
  //        min=j;
  //      }

  //   }
  //   swap(arr[min],arr[i]);
  // }

  // 2)

  int min = 0;
  for (int i = 0; i < a - 1; i++)
  {
    for (int j = i; j < a; j++)
    {
      if (arr[i] > arr[j])
      {
        min = arr[i];
        arr[i] = arr[j];
        arr[j] = min;
      }
    }
  }

  // 3))
  //  for (int  i = 0; i < a-1; i++)

  // {
  //   int min = i;
  //   for (int j = 0; j < a; j++)
  //   {
  //     if(arr[j]>arr[min])
  //     {
  //       min=j;

  //     }
  //     int temp =arr[min];
  //     arr[min]=arr[i];
  //     arr[i]=temp;

  //   }
  // }
}

int main()
{
  int arr[10] = {5, 4, 8, 7, 6, 2, 1, 5, 9, 3};
  
  int a = sizeof(arr) / sizeof(arr[0]);
  selection_sort(arr, a);

  for (int i = 0; i < a; i++)
  {
    cout << arr[i] << " ";
  }

  // conoverting string to integere using librayry
  //  string h ="4";
  //  string s ="4";

  // int b = stoi (h) ;
  // int d=stoi( s);
  // cout<<b+d;


  

  return 0;
}