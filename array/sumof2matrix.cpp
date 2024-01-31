
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter the first value"<<endl;
    cin>>a;
    int b;
    cout<<"enter the second value"<<endl;
    cin>>b;
    int arr[a][b],sc,sr;
    int arr1[a][b];
    int arr2[a][b];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    } for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
    
    for(int i=0;i<a;i++){
        sc=0,sr=0;
        for(int j=0;j<b;j++){
            arr2[i][j]=arr[i][j]+arr1[i][j];
            cout<<arr2[i][j]<<endl;
        }
        
        
        
    }

    return 0;
}