#include<stdio.h>
int main(){
    int a[10], ele, pos, i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n); 
    printf("Enter the elements of an array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("The array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    printf("Enter the position:");
    scanf("%d",&pos);

    for(i=n-1;i>pos;i++)
    {
        a[i-1]=a[i];
    }
    printf("the new array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    
    return 0;

}
