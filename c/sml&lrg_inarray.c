#include<stdio.h>
int main(){
    int a[10],n,i,lrg,sml;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    sml=a[1];
    lrg=a[1];

    for(i=0;i<n;i++)
    {
        if(a[i]<=sml)
        {
            sml=a[i];
        }

        if(a[i]>=lrg)
        {
            lrg=a[i];
        }
    }

    printf("largest=%d",lrg);
    printf("smallest=%d",sml);






    return 0;
}