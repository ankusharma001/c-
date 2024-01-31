#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number = ";
    cin>>a;   
    cout<<"enter second number = ";
    cin>>b;    
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <b; j++)
        {
         cin>>arr[i][j];
        }
    }  int d=1; 

    for (int i = 0; i < a; i++)
    {
        int c=0 ;
        int f=0;        
        for (int j = 0; j <b; j++)
        {  
           c+= arr[i][j];
           f+=arr[j][i];                      
        } 
       cout<<"sum of row "<<"'"<<d <<"'"<<" = "<< c <<endl; 
       cout<<"sum of column "<<"'"<<d<<"'"<<" = "<< f<<endl;
       d++;
    }    
     
return 0;
}