#include<stdio.h>
#include<stdlib.h>

void Forward(int *p, int n){
    printf("Forward array is:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d", *(p+i));
    }
    printf("\n");
}

void Backward(int *p, int n)
{
    printf("The backward array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d", *(p+(n-1)-i));
    }
}


int main()
{

    int n,i;
    int *a;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\n");

    // for(i=0;i<n;i++)
    // {
    //     printf("%d",a[i]);
    // }

    Forward(a,n);
    Backward(a,n);



    return 0;
}