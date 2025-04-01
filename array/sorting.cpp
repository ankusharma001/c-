#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Eneter the second number = ";
    cin>>b;
    int arr[a][b];
    for (int  i = 0; i < a; i++)
    {
        for (int j = 0; i < a; j++)
        {
          cin>>arr[i][j]; 
        }        
    }
    
    for (int  i = 0; i < a; i++)
    {
        for (int j = i+1 ; j < a; j++)
        {
        if(arr[i]>arr[j])
        {
            
        }
        
    }cout<<arr[i];
    }
    

    
     
return 0;
}

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// class time {
//     int sec;
//     int min ;
//     int hr;
//     public:
//     time(int h,int m,int s): sec(s) , min(m),hr(h){}

//     void display()
//     {
//         cout<< hr<<":" << min<< ": "<< sec<<":"<<endl ;
//     }
//     time operator+(time inp)
//     {
//         int asec,amin,ahr;

//         asec=sec+inp.sec;
//         amin=min+inp.min+(asec/60);
//         ahr=hr+inp.hr+(amin/60);
//         return time(asec, ahr, amin);
//     }

// };

// int main()
// {

//     int h1,m1,s1;
//     int h2,m2,s2;
//     cin>>h1>>m1>>s1>>h2>>m2>>s2;


//     time t1(h1,m1,s1);
//     time t2(h2,m2,s2);
//     time t3 =t1+t2;
//     t3.display();

    



    
    
    
    
    


// return 0;
// }
// #include <iostream>
// #include <set>
// #include <climits>
// #include <vector>

// using namespace std;
// int main() {
//     int arr[8]={1,1,3,5,4,8,1,2};

//     int a=INT_MIN;
//     int b=INT_MIN;

//     for (int i = 0; i < 8; i++)
//     {
//         /* code */
//         if(a<arr[i])
//         {
//             a=arr[i];
//             b=a;


//         }
//         else if(a>arr[i])
//         {
//             a=arr[i];
//         }
//     }
//     cout<<b<<a;
    
    

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main() {
    
    
//     int a=5 ;
//     int arr[5]={1,5,3,2,1};
//     int b=INT_MIN;
//     int c=INT_MIN;
//     for (int  i = 0; i < a; i++)
//     {
//         /* code */
//         if(b<arr[i])
//         {
//             c=b;
//             b=arr[i];
//         }
//         else if (c<arr[i]&& b>arr[i])
//         {
//             /* code */
//             c=arr[i];
//         }
        
//     }
    
//     cout<<c;

//     // sort (arr,arr+a,greater<int> ());
//     // if(a>=2)
//     // {
//     //     cout<<a
//     // }

//     return 0;
// }
// #include <iostream>
// #include <cstring>
// using namespace std;
 
// int main()
// {
//     char arr[100];
//     char ar[10][20];
//     int m=0,n=0,max=0,min=100,k=0,l=0;
//     cin.getline(arr,100);

//     for(int i=0;arr[i]!='\0';i++)
//     {
//         if(arr[i]==' ')
//         {
//             ar[m][n]='\0';
//             m++;
//             n=0;

//         }
//         else
//         {
//             ar[m][n]=arr[i];
//             n++;
//         }
//     }
//     ar[m][n]='\0';
   
//     for (int  i = 0; i <=m; i++)
//     {
//         /* code */
//         int len = strlen(ar[i]);
//         if(max<len)
//         {
//             max=len;
//             k=i;
//         }
//         else
//         {
//             min=len;
//             l=i;
//         }

//     }
    
//     cout<<ar[k]<<endl;
//     cout<<ar[l]<<endl;

// return 0;
// }

#include <iostream>
 #include <string>
 #include <vector>
 #include <set> 

using namespace std;
 

int main()
{
    
    int arr[5]={1,1,2,3,2};
    
    for (int  i = 0; i < 5; i++)
    {
        /* code */
        int count =0;
        for (int j = 0; j < 5; j++)
        {
            /* code */
            if(arr[i]==arr[j])
            {
                count ++;
            }
        }
        if(count ==1)
        {
            cout<<arr[i];
        }
        
        
    } 
    
    
    
    
    
    
return 0;
}
