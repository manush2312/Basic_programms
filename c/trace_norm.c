#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[5][5],i,j,m,n,trace=0,sum=0,norm;
    printf("Enter the dimension of array:");
    scanf("%d %d", &m, &n);
    printf("Enter elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
        scanf("%d", &a[i][j]);
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

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j]*a[i][j];
        }
    }
    norm=sqrt(sum);

    for(i=0;i<n;i++)
    {
        trace = trace+a[i][i];
    }
    printf("\n");
    printf("trace=%d and norm = %d", trace, norm);

    


    return 0;
}