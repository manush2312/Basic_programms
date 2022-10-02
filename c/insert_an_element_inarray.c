#include<stdio.h>
int main(){
    int a[10], ele=0, pos=0, i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n); 
    printf("Enter the elements of an array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("a[0] is %d",a[0]);

    printf("The array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    printf("\nenter the element and position:");
    scanf("%d %d", &ele, &pos );

    n=n+1;//array ki size increase ki by 1 element..
    for(i=n-1; i>=pos ; i--)
    {
        
        a[i]= a[i-1];
        
        
        
    }
    a[pos-1]=ele;

    printf("the new array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}


// #include<stdio.h>
// int main()
// {
//     int i,j,a[100],ele,pos,n;
//     printf ("enter dimension\n");
//     scanf ("%d", &n);
//     printf("the array is :");
//     for (i=0;i<n;i++)
//     {
//         scanf ("%d", &a[i]);
//     }
//     for (i=0;i<n;i++)
//     {
//         printf ("%d", a[i]);

//     }
//     printf ("the array is %d", a[i]);
//     printf ("enter pos and ele to be inserted");
//     scanf ("%d%d", &pos, &ele);
//     for (i=n-1;i<=pos;i--)
//     a[i]=a[i-1];
//     a[pos-1]=ele;
//     n=n+1;
//     for (i=0;i<n;i++)
//     printf ("%d", a[i]);
//     printf ("\n");
//     return 0;




// }