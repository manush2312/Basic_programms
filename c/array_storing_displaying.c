#include<stdio.h>
int main(){
    int arr[20],n,j,i; 
    printf("Enter the limit of n:");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j=0;j<n;j++)
    {
        printf("%d",arr[j]);
        printf("\t");
    }







    return 0;
}