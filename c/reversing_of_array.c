#include<stdio.h>
int main(){
    int temp=0,a[10], b[10],n,i,j;
    printf("Enter the size of a:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);

    }
    printf ("the array is", a[i]);
    for (i=0,j=n-1;i<n/2;i++,j--)
    {
        temp= a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf ("the reversed array is:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }









    return 0;
}