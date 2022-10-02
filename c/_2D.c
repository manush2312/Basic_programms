#include<stdio.h>
int main()
{
    int i,j,m,n,a[50][50];
    printf("Enter the rows and columns:");
    scanf("%d %d",&m, &n);

    printf("Enter the elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array is:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]);
            
        }
        printf("\n");
    }



    return 0;
}