// #include <iostream>
//  #include <climits>
// using namespace std;
 
// int secondlargest (int arr[],int n )
// {
//     int largest =INT_MIN;
//     int slargest=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>largest)
//         {
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]>slargest && arr[i]!=largest)
//         {
//             slargest=arr[i];

//         }

//     }
//     return slargest;

// }
// int main()
// {
//     int arr[]={12,3,1,10,35,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int result =secondlargest(arr,n);
//     cout<<result <<endl;

// return 0;

// }

// #include <iostream>
 
// using namespace std;
 
//  void reverse (int arr[],int start ,int end )
//  {
//     while (start<end ){
        
//     }
//  }
// void  rotation(int arr[],int n,int ro)
// {
//     int g=n-ro;
//     int c=0;
//     int temp[n];

//     for (int  i = g; i < n; i++)

//     {
//       temp[c]=arr[i];
//       c++;  
//     }
//     for(int i=0;i<g;i++)
//     {
//         temp[c]=arr[i];
//         c++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<temp[i]<<" ";
//     }

    
    

// }

// int main()
// {
//     int arr[]={12,54,4,56,8,9,6};
    
//     int n =sizeof(arr)/sizeof(arr[0]);
    
//     int ro=3;

//     rotation (arr,n,ro);
    

//     // for (int  i = 0; i < n; i++)
//     // {
//     //     cout<<temp[i];
//     // }
    
// return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// void sortedarr(int arr[],int arr2[],int a,int n )
// {
//     int arr1[a+n];
//     int count =0;
//     for(int i=0;i<a+n;i++)
//     {
//         arr1[count]=arr[i];
//         count ++;
//         arr1[count]=arr2[i];
//         count ++;

//     }
//     sort(arr1,arr1+a+n);
//     for (int  i = 0; i < a+n; i++)
//     {
//         cout<<arr1[i];
//     }
    
// }


// int main()
// {
//     int arr[]={1, 3, 5, 7};
//     int arr2[]={ 4,2, 6, 8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int a=sizeof(arr2)/sizeof(arr2[0]);

//     sortedarr(arr,arr2,n,a);
    
// return 0;
// }

// #include <iostream>
 
// using namespace std;
 
//  int missingnum (int arr[],int n)
//  {
//     int a=arr[0];
//     int m=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a==arr[i])
//         {
//             a++;
//             continue;
//         }
//         else
//         {
//             m=a;

//         }
//     }
//     return m;
//  }
// int main()
// {
//     int arr[]={0, 1, 2, 3, 5, 6, 7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<missingnum(arr,n );
// return 0;
// }

// #include <iostream>
 
// using namespace std;

// void paair (int arr[],int n,int t)
// {
    
//     for (int  i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
            
        
        
//         if(arr[i]+arr[j]==t)
//         {

//             cout<<"("<<arr[i]<<","<<arr[j]<<")";
//             arr[j]=0;

//         }
        
//         }
//     }
    

// }
 
// int main()
// {
//     int arr[]={1, 2, 3, 4, 5, 6, 7};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     int target=9;

//     paair(arr,n,target);

// return 0;
// }

// #include <iostream>
 
// using namespace std;

// void duplicate (int arr[],int count )
// {
//     int c;
    
//     for (int  i = 0; i < count; i++)
//     {
//          c=0;

//         for (int j = 0; j < count; j++)

//         {

//             if(i==j)
//             {
//                 continue;
//             }
//             else if(arr[i]==arr[j])
//             {
//                 c=arr[i];
//             }
//             /* code */
//         }
//         int d;
//         if(c!=d&&c!=0)
//         {
//             d=c;   
//             cout<<c;
//         }
        
        
//     }
    
    
    

// }

// int main()
// {
//     int arr[]={1,5,49,5,5,4,3,3};
//     int n =sizeof(arr)/sizeof(arr[0]);

//     duplicate(arr,n);
// return 0;
// }

// #include <iostream>
// #include <stack>
//  #include<algorithm>
// using namespace std;

// void unmatch (int arr[],int n )
// {
    

//     int b=0;
//  for (int  i = 0; i < n; i++)
//  {
//     int count =0;
    
//     for (int j = 0; j < n; j++)
//     {
//         if(arr[i]==arr[j])
//         {
//             count++;
            
            
            
//             if(count %2!=0 and  count>2)
//             {
//                 b=arr[i];

//             }
//         }
//     }
//     if(count ==1)
//     {
//         cout<<arr[i];
//     }
    
//  }cout<<b<<" ";
 
   
// }

// int main()
// {
//     int arr[]={1, 2, 3, 5,2, 3, 3,1,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
   
   

//     unmatch (arr,n );


// return 0;
// }


// #include <iostream>
//  #include <algorithm>
// using namespace std;
 
// void outperformer (int arr[],int n )
// {
//     sort(arr,arr+n);
//     for (int i = 0; i < n-2; i++)
//     {
//         cout<<arr[i];
//     }
    
// }

// int main()
// {
//     int arr[]={7 ,12, 9, 56,15, 70,  19, 32};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     outperformer (arr,n);
// return 0;
// }