#include<stdio.h>
int main()
{
    int a;
    printf("enter the size of array : ");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements in the array : ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<a;k++)
                {
                    arr[k]=arr[k+1];
                }
                a--;
                j--;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
