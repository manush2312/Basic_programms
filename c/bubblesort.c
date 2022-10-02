#include <stdio.h>
int main ()
{
    int a[10], n,i, temp;
    char ch;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements one by one in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array is:");
     for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
        printf ("\n");
    }
    
    
            for(i=0;i<(n-1);i++)
            {
                for(int j=0;j<(n-1);j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            printf("Sorted array is:");
            for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
            }
        
    






    return 0;
}