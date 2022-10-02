#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50][50],i,j,m,n,rowsum,colsum;
    printf("Enter the dimension of the array:");
    scanf("%d %d",&m ,&n);

    printf("Enter the elements of the array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d", a[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        rowsum=colsum=0;
        for(j=0;j<n;j++)
        {
            rowsum=rowsum+a[i][j];
            colsum=colsum+a[j][i];
        }
        printf("rowsum=%d and columnsum=%d", rowsum, colsum);
        printf("\n");
    }






    return 0;
}