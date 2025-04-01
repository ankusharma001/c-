// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

// time complixity ======>>>>>>>>>> o(n2)->worst n avg [][][][]o(n)(if teh array is already sorted)

void Inserton_sort(int arr[], int a)
{
  for (int i = 0; i < a; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])

    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main()
{
  int arr[10] = {4, 1, 5, 7, 9, 5, 4, 5, 4, 4};
  int a = sizeof(arr) / sizeof(arr[0]);

  Inserton_sort(arr, a);

  for (int i = 0; i < a; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}