#include<stdio.h>
#include<stdlib.h>


void Smallest(int *p, int n)
{
    int i,small;
    small = *p;
    for(i=0;i<n-1;i++)
    {
        if((*(p+i))>(*(p+i+1)))
        {
            small=(*(p+i+1));
        }
    }

    printf("Smallest is %d", small);




}

int main()
{
    int *a,i,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    Smallest(a,n);

    

    return 0;
}