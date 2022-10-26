#include<stdio.h>
#include<stdlib.h>

void Reverse(int *p, int n)
{
    printf("\n%d\n",p);// prints base address of array
    int *b , *l , *mid;
    l=(p+n);//storing last address of element of an array 
    printf("\n%d\n",l);
    mid = (p+(l-p)/2);
    printf("\n%d\n",mid);
     l=l-1;
    for(b=p;b<=mid;b++,l--)
    {
        int t;
        t=*b;
        *b = *l;
        *l=t;
    }
}


int main()
{
    int *a,i,n;
    printf("Enter the size of the aaray\n:");
    scanf("%d",&n);

    a=(int*)calloc(n,sizeof(int)); // declaring array 
    printf("\nEnter the elements of array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    Reverse(a,n);
    printf("\nReversed array is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }



    return 0;
}