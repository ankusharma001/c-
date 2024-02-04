// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void add(int *x, int *y)
{
  // int a=x+y;

  *x = *x + *y;
}

//relation between array and pointer

void process(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << *(arr + i) << " ";
  }
}

int main()
{
  int a = 12;
  int *s = &a;

  cout << &a << endl;
  cout << &s << endl;
  cout << s << endl;
  cout << *s << endl;

  int x, y;
  x = 10, y = 30;

  int *ptr1 = &x;
  int *ptr2 = &y;

  // call by reference

  swap(&x, &y);
  cout << x << " " << y << endl;

  swap(ptr1, ptr2);
  cout << x << " " << y << endl;

  add(&x, &y);

  cout << x << endl;
  cout << "size of x is " << sizeof(x) << endl;

  int arr[4] = {1, 45, 78, 65};

  int *ptrr = &arr[0];
  int *ptarr = &arr[1];

  cout << *ptrr << " ";
  cout << ptrr << endl;

  *ptrr++;
  cout << *ptrr << " ";
  cout << ptrr << endl;

  (*ptrr)++;
  cout << *ptrr << " ";
  cout << ptrr << endl;

  ++*ptrr;
  cout << *ptrr << " ";
  cout << ptrr << endl;

  *++ptrr;
  cout << *ptrr << " ";
  cout << ptrr << endl;

  process(arr, 4);

  /*types of pointers 
  1)  null pointere 
  2) void pointer 
  3) dangling pointer 
  4) wild pointer*/

  //wild pointer // we declare pointer but not inilizes it it is called wild pointer  due to this we might have some undefined behavior
    int* nullptrr;

    //NULL pointer // we are going to add value after in the code so this is a null pointer
    int* null =NULL;
    cout<<"null pointer "<<null<<endl;
    //run time error might occure on derefrecing
    // cout<<"value  is "<<*null; 

    //dangling pointer // it id the type of pointer the point to a memory to that in not valid
    
    // eg

    int *ptrx=NULL;
    {
      int z= 999;
      ptrx=&z;
      cout<<*ptrx<<" ";
    }
    cout<<*ptrx<< " ";

    //void pointer  ==> reuseable type pointer it can point any type of datatype ,,, void cannot be derefrenced directly ,,  we can use type casting to derefrence pointer 

    int sd=445;
    void *ptrsd=&sd;

    int * integervalue= (int *)ptrsd;

    cout<<*integervalue<<" ";
    //nthb
  return 0;
}