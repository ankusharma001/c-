// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b=0,n,i;
    scanf("%d",&a);
    int arr1[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the number you want to find ");
    scanf("%d",&n);
    for(int i=0;i<a;i++){
        if(arr1[i]==n){
            b=1;
            break;
       } }
        if(b==1){
            printf("number is found");
        }else{
            printf("number is not found");
        }
    
    // for(j=0;j<a;j++){
    //     scanf("%d",&arr2[j]);
    // }
    // for(k=0;k<a;k++){
    //     arr1[k]=arr1[k]+arr2[k];
    //     arr2[k]=arr1[k]-arr2[k];
    //     arr1[k]=arr1[k]-arr2[k];
    //     printf("%d ",arr1[k]);
    // }
    // printf("\n");
    // for(k=0;k<a;k++){
//       printf("%d ",arr2[k]);
// }

    
    //     if (arr[i]%2==0){
    //         b++;
    //         d+=arr[i];
    //     }else{
    //         c++;
    //         e+=arr[i];
    //     }
    // }printf("even count = %d\n",b);
    // printf("sum of even = %d\n",d);
    // printf("odd count= %d\n",c);
    //  printf("sum of odd = %d\n",e);
    

    return 0;
}