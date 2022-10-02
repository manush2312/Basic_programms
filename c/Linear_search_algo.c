#include<stdio.h>
int main(){
    int a[10], ele, pos, i,n,flag=0;
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

    printf("Enter the element to be searched:");
    scanf("%d",&ele);

    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("Found @ location =%d",i);
            flag=1;
            break;
        }}
        if(flag==0) 
        {
            printf("Element not found");
        }
    





    return 0;
}