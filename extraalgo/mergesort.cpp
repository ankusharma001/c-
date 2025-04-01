// <<<<<<< HEAD
// #include <bits/stdc++.h>
// #include <iostream>
 
// using namespace std;

// void mergsortt(vector<int> &arr ,int low , int high  ,int mid)
// {
//   vector <int> arr1;
//  int left= low ;
//  int  right = mid+1;
//  while (left<=mid && right<=high)
//  {
//   if(arr[left]<=arr[right])
//   {
//     arr1.push_back(arr[left]);
//     left++;
//   }
//   else 
//   {
//     arr1.push_back(arr[right]);
//     right++;
//   }
//  }
//  while (left<=mid)
//  {
//   arr1.push_back(arr[left]);
//   left++;
//   /* code */
//  }
//   while (right<=high)
//  {
//   arr1.push_back(arr[right]);
//   right++;
//   /* code */
//  }

//  for (int  i = low; i <= high; i++)
//  {
//   arr[i]=arr1[i-low];
//   /* code */
//  }
 
 
 

// }

// void mergsort (vector<int> &arr ,int low , int high )
// {

//   if(low>=high) 
//   {
//     return ;
//   }
//   int mid = (low + high )/2;

//   mergsort(arr,low, mid);
//   mergsort(arr,mid+1,high);     

//   mergsortt(arr,low,high,mid);     


// }




// int main()
// {

//   vector <int> arr={4,8,6,5,4,8,5,7,55,46,5} ;

//   int low =0;

//   int high = arr.size()-1;

//   cout<<"before"<<endl;
//   for (int i = 0; i < arr.size(); i++)
//   {
//     cout<<arr[i]<<" ";
//     /* code */
//   }
  

//   mergsort(arr,low,high);

//   cout<<"after "<<endl;

//   for(int i=0;i<arr.size();i++)
//   {
//     cout<<arr[i]<<" ";
//   }

 
 
//   return 0;
// }


// /*
// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// int main() {

//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
//     int n = 7;

//     cout << "Before Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "After Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     return 0 ;
// =======
#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

void mergsortt(vector<int> &arr ,int low , int high  ,int mid)
{
  vector <int> arr1;
 int left= low ;
 int  right = mid+1;
 while (left<=mid && right<=high)
 {
  if(arr[left]<=arr[right])
  {
    arr1.push_back(arr[left]);
    left++;
  }
  else 
  {
    arr1.push_back(arr[right]);
    right++;
  }
 }
 while (left<=mid)
 {
  arr1.push_back(arr[left]);
  left++;
  /* code */
 }
  while (right<=high)
 {
  arr1.push_back(arr[right]);
  right++;
  /* code */
 }

 for (int  i = low; i <= high; i++)
 {
  arr[i]=arr1[i-low];
  /* code */
 }
 
 
 

}

void mergsort (vector<int> &arr ,int low , int high )
{

  if(low>=high) 
  {
    return ;
  }
  int mid = (low + high )/2;

  mergsort(arr,low, mid);
  mergsort(arr,mid+1,high);     

  mergsortt(arr,low,high,mid);     


}




int main()
{

  vector <int> arr={4,8,6,5,4,8,5,7,55,46,5} ;

  int low =0;

  int high = arr.size()-1;

  cout<<"before"<<endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
    /* code */
  }
  

  mergsort(arr,low,high);

  cout<<"after "<<endl;

  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }

 
 
  return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
>>>>>>> 8139996fb471f6a0c410f77ff9bb1342358e1f2a
}*/