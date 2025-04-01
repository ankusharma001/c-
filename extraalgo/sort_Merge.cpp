// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Time complixity ====>>>>>>>log2 n

// void merge(int *arr, int low, int mid, int high)
// {
//   int temp[100];

//   int left = low;
//   int right = mid + 1;
//   while (left <= mid && right <= high)
//   {
//     if (arr[left] <= arr[right])
//     {
//       cin >> temp[left];
//       left++;
//     }
//     else
//     {
//       cin >> temp[right];
//       right++;
//     }
//   }
//   while (left <= mid)
//   {
//     cin >> temp[left];
//     left++;
//   }
//   while (right <= mid)
//   {
//     cin >> temp[right];
//     right++;
//   }

//   for (int i = low; i <= high; i++)
//   {
//     arr[i] = temp[i - low];
//   }
// }

void merge(int arr[], int l, int mid, int r)
{
  int n1 = mid - l - 1;
  int n2 = r - mid;
  int a[n1];
  int b[n2];

  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[l + i];
  }
  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[mid + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2)

  {
    if (a[i] < b[j])
    {
      arr[k] = a[i];
      k++;
      i++;
    }

    else
    {
      arr[k] = b[j];
      k++;
      j++;
    }
  }

  while (i < n1)
  {
    arr[k] = a[i];
    k++;
    i++;
  }
  while (j < n2)
  {
    arr[k] = b[j];
    k++;
    j++;
  }
}
void Merge_sort(int arr[], int low, int high)
{
  if (low == high)
  {
    return;
  }
  int mid = (low + high) / 2;

  Merge_sort(arr, low, mid);
  Merge_sort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

int main()
{
  int arr[9] = {1, 4, 5, 7, 9, 3, 4, 6, 1};
  int a = sizeof(arr) / sizeof(arr[0]);

  int b = 0;
  int c = a;

  Merge_sort(arr, b, c); // divide and merge

  for (int i = 0; i < a; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}